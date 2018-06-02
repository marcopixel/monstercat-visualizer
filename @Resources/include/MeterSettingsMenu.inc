[MeterBackground]
Meter=Shape
MeterStyle=StyleBG
Shape=Rectangle 0,0,700,#SettingHeight# | Fill Color 255,255,255,255 | StrokeWidth 0
Shape2=Rectangle 200,0,500,#SettingHeight# | Fill LinearGradient BGGradient | StrokeWidth 0

[MeterGeneral]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 56,56,56,150
X=20
Y=15
AntiAlias=1
Text="General"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "general.ini"]
[MeterMediaPlayer]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 56,56,56,150
X=20
Y=5R
AntiAlias=1
Text="Media Player"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "mediaplayer.ini"]
[MeterVisualizer]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 56,56,56,150
X=20
Y=5R
AntiAlias=1
Text="Visualizer"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "visualizer.ini"]
[MeterStyling]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 56,56,56,150
X=20
Y=5R
AntiAlias=1
Text="Styling"
LeftMouseDownAction=[!ActivateConfig "#ROOTCONFIG#\settings" "styling.ini"]
[MeterAbout]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 33,150,243,255
X=20
Y=15R
AntiAlias=1
Text="About"
LeftMouseDownAction=https://github.com/MarcoPixel/Monstercat-Visualizer#readme
[MeterMenuDividier]
Meter=Image
SolidColor=0,0,0,255
X=20
Y=15R
H=3
W=160
[MeterClose]
Meter=String
FontFace=Montserrat Light
FontSize=14
InlineSetting=Color | 205,32,31,225
X=20
Y=10R
AntiAlias=1
Text="Close"
LeftMouseDownAction=[!DeactivateConfig]