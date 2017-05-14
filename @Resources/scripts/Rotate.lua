-- @author alatsombath / Github: alatsombath

function Initialize()
  -- Get the config variable so it won't apply the changes to every rainmeter skin loaded
  config = SKIN:GetVariable("Config")

  -- Get nearestAxis variable and set matrix to be a string
  nearestAxis, matrix = SKIN:ParseFormula(SKIN:GetVariable("NearestAxis")), ""

  -- Set options for each config
  local barHeight = SKIN:ParseFormula(SKIN:GetVariable("BarHeight"))
  local barWidth, barGap = SKIN:ParseFormula(SKIN:GetVariable("BarWidth")) * SKIN:ParseFormula(SKIN:GetVariable("ScaleVisualizer")), SKIN:ParseFormula(SKIN:GetVariable("BarGap")) * SKIN:ParseFormula(SKIN:GetVariable("ScaleVisualizer"))
  local offset = math.ceil(barWidth) + math.ceil(barGap)
  local angle = SKIN:ParseFormula(SKIN:GetVariable("Angle"))
  local meterName, lowerLimit, upperLimit = {}, 1, SKIN:ParseFormula(SKIN:GetVariable("BarCount"))

  -- Add group to MeterBars and then update them
  for i = lowerLimit, upperLimit do
    meterName[i] = "MeterBar" .. i-1
    SKIN:Bang("!SetOption", meterName[i], "Group", "GroupBars", config)
    SKIN:Bang("!UpdateMeter", meterName[i], config)
  end

  -- Change Positioning based on NearestAxis
  if nearestAxis ~= 0 then
	SKIN:Bang("!SetOptionGroup", "GroupBars", "W", barHeight, config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "H", barWidth, config)
    for i = lowerLimit, upperLimit do
      SKIN:Bang("!SetOption", meterName[i], "Y", offset * (i - lowerLimit), config)
    end
  else
    SKIN:Bang("!SetOptionGroup", "GroupBars", "W", barWidth, config)
    SKIN:Bang("!SetOptionGroup", "GroupBars", "H", barHeight, config)
    for i = lowerLimit, upperLimit do
      SKIN:Bang("!SetOption", meterName[i], "X", offset * (i - lowerLimit), config)
    end
  end

  if angle > 0 then
	SKIN:Bang("!SetOptionGroup", "GroupProgressBar", "Hidden", 1, config)
  end

  -- When Angle is 0 revert to default behaviour
  if angle ~= 0 then
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

  -- Remove the OnUpdateAction from MeasureRotate.inc to remove log spam
  SKIN:Bang("!WriteKeyValue", "Matrix", "OnUpdateAction", "", "#@#include\\MeasureRotate.inc")

  -- Deactivate init skin
  SKIN:Bang("!DeactivateConfig")
end
