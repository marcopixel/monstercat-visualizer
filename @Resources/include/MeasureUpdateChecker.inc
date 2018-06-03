; https://api.github.com/repos/marcopixel/Monstercat-Visualizer/releases/latest

[MeasureWebParser]
Measure=WebParser
URL=https://github.com/MarcoPixel/Monstercat-Visualizer/releases/latest
RegExp=(?siU)"/MarcoPixel/Monstercat-Visualizer/releases/tag/(.*)"
FinishAction=[!EnableMeasure MeasureLatestVersion][!PauseMeasure MeasureWebParser][!PauseMeasure MeasureCurrentVersion]
Disabled=#DisableUpdateNag#

[MeasureCurrentVersion]
Measure=String
String=#Version#
UpdateDivider=-1
Disabled=#DisableUpdateNag#

[MeasureLatestVersion]
Measure=Plugin
Plugin=WebParser
URL=[MeasureWebParser]
StringIndex=1
IfMatch=[MeasureCurrentVersion:EscapeRegExp]
IfMatchAction=[!PauseMeasure MeasureLatestVersion][!WriteKeyValue Variables LatestVersion [MeasureLatestVersion] "#@#Variables.ini"][!DeactivateConfig "#ROOTCONFIG#\settings\misc\update" "UpdateInfo.ini"]
IfNotMatchAction=[!Log "Update avaliable, please download the newest version!"][!PauseMeasure MeasureLatestVersion][!WriteKeyValue Variables LatestVersion [MeasureLatestVersion] "#@#Variables.ini"][!ActivateConfig "#ROOTCONFIG#\settings\misc\update" "UpdateInfo.ini"]
DynamicVariables=1
Disabled=1