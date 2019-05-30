; Meter Dummy - this prevents that the progress bar flashes when refreshing
[MeterDummy]
Meter=Image
W=#SkinWidth#
H=#BarHeight#
Hidden=(#ShowProgressBar# > 0 ? 0 : 1)
Group=GroupProgressBar

; Meter ProgressBar - shows the progress bar below the visualizer
[MeterProgressBar]
Meter=Bar
MeasureName=MeasureProgress
BarOrientation=Horizontal
X=0
Y=(8*#ScaleVisualizer#)R
W=#SkinWidth#+(4*#ScaleVisualizer#)
H=(8*#ScaleVisualizer#)
SolidColor=#DropShadowColor#
BarColor=#Color#
DynamicVariables=1
Group=GroupProgressBar | GroupDynamicColors
Hidden=(#ShowProgressBar# > 0 ? 0 : 1)
LeftMouseUpAction=[!CommandMeasure MeasureProgress "SetPosition $MouseX:%$"][!Update][!Redraw]