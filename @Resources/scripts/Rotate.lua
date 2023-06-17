-- @author alatsombath / Github: alatsombath

function Initialize()
  -- Get the config variable so it won't apply the changes to every rainmeter skin loaded
  config = SKIN:GetVariable("Config")

  -- Get nearestAxis variable and set matrix to be a string
  nearestAxis, matrix = SKIN:ParseFormula(SKIN:GetVariable("NearestAxis")), ""

  -- Set options for each config
  local scale = SKIN:ParseFormula(SKIN:GetVariable("ScaleVisualizer"))
  local barHeight = SKIN:ParseFormula(SKIN:GetVariable("BarHeight"))
  local barWidth = SKIN:ParseFormula(SKIN:GetVariable("BarWidth")) * scale
  local barGap = SKIN:ParseFormula(SKIN:GetVariable("BarGap")) * scale
  local offset = math.floor(barWidth + barGap)
  local angle = SKIN:ParseFormula(SKIN:GetVariable("Angle"))
  local meterName, meterShadow, lowerLimit, upperLimit = {}, {}, 1, SKIN:ParseFormula(SKIN:GetVariable("BarCount"))
  local skinWidth = math.ceil(offset * (upperLimit) - barGap)

  -- Add group to MeterBars and then update them
  for i = lowerLimit, upperLimit do
    meterName[i] = "MeterBar" .. i-1
    meterShadow[i] = "MeterShadowBar" .. i-1
    SKIN:Bang("!SetOption", meterName[i], "Group", "GroupBars | GroupDynamicColors", config)
    SKIN:Bang("!SetOption", meterShadow[i], "Group", "GroupBars | GroupShadowBars", config)
    SKIN:Bang("!UpdateMeter", meterName[i], config)
    SKIN:Bang("!UpdateMeter", meterShadow[i], config)
  end

  -- Change Positioning based on NearestAxis
  if nearestAxis ~= 0 then
    SKIN:Bang("!SetOptionGroup", "GroupBars", "W", barHeight, config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "H", barWidth, config)
    SKIN:Bang("!SetOptionGroup", "GroupShadowBars", "H", barWidth, config)
    for i = lowerLimit, upperLimit do
      SKIN:Bang("!SetOption", meterName[i], "Y", offset * (i - lowerLimit), config)
      SKIN:Bang("!SetOption", meterShadow[i], "Y", (4*scale) + offset * (i - lowerLimit), config)
      SKIN:Bang("!SetOption", meterName[i], "X", (4*scale), config)
    end
  else
    SKIN:Bang("!SetOptionGroup", "GroupBars", "W", barWidth, config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "H", barHeight, config)
    SKIN:Bang("!SetOptionGroup", "GroupShadowBars", "H", barHeight + (4*scale), config)
    for i = lowerLimit, upperLimit do
      SKIN:Bang("!SetOption", meterName[i], "X", offset * (i - lowerLimit), config)
      SKIN:Bang("!SetOption", meterShadow[i], "X", (4*scale) + offset * (i - lowerLimit), config)
    end
  end

  -- set width to measure
  SKIN:Bang("!SetOption", "Width", "Formula", math.ceil(offset * (upperLimit) - barGap), config)

  -- write skin width to variables file
  SKIN:Bang("!WriteKeyValue", "Variables", "SkinWidth", skinWidth, "#@#variables.ini")

  -- When Angle is 0 or 180 revert to default behaviour
  if angle ~= 0 and angle ~= 180 then
    if nearestAxis ~= 0 then
      SKIN:Bang("!SetOptionGroup", "GroupBars", "BarOrientation", "Horizontal", config)
      SKIN:Bang("!SetOptionGroup", "GroupProgressBar", "Hidden", 1, config)
    end
  	SKIN:Bang("!SetOptionGroup", "GroupBars", "AntiAlias", 1, config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "TransformationMatrix", matrix, config)
    SKIN:Bang("!UpdateMeterGroup", "GroupBars", config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "TransformationMatrix", "", config)
  end

  -- Update the group
  SKIN:Bang("!UpdateMeterGroup", "GroupBars", config)
  SKIN:Bang("!UpdateMeterGroup", "GroupShadowBars", config)

  -- Remove the OnUpdateAction from MeasureRotate.inc to remove log spam
  SKIN:Bang("!WriteKeyValue", "Matrix", "OnUpdateAction", "", "#@#include\\MeasureRotate.inc")
  SKIN:Bang("!PauseMeasureGroup", "GroupMeasureRotate", config)

  -- Deactivate init skin
  SKIN:Bang("!DeactivateConfig")
end