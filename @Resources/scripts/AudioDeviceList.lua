-- @author alatsombath / Github: alatsombath

function Initialize()
  a = 1
  for i in string.gmatch(SKIN:GetMeasure("MeasureAudioDeviceList"):GetStringValue(), "[^\n]+") do
    a, b = a + 1, 1
    for j in string.gmatch(i, "[^:]+") do
	  if b ~= 1 then
	    SKIN:Bang("!SetOption", "Rainmeter", "ContextTitle" .. a, j)
	  else
	    SKIN:Bang("!SetOption", "Rainmeter", "ContextAction" .. a, "[!WriteKeyValue Variables AudioDeviceID " .. j .. " \"#@#variables.ini\" ][!RefreshGroup Spectrum][!DeactivateConfig]")
	  end
	  b = b + 1
	end
  end
end
