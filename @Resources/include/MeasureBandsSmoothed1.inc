[MeasureAudioMultipler]
Measure=Calc
Formula=log(#Multiplier#)
UpdateDivider=-1

[MeasureAudioSmoothed0]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!Log "Audio measures disabled | AutoMute #EnableAutoMute#"][!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "#MinBarValue#"]
IfFalseAction=[!Log "Audio measures enabled | AutoMute #EnableAutoMute#"][!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw0*#multi2#+MeasureAudioRaw0*#multi1#+MeasureAudioRaw1*#multi2#+MeasureAudioRaw3*#multi3#+MeasureAudioRaw5*#multi4#+MeasureAudioRaw7*#multi5#+MeasureAudioRaw9*#multi6#+MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw0*#multi2#+MeasureAudioRaw1*#multi1#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi6#)/12/2/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed1]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw0*#multi2#+MeasureAudioRaw1*#multi1#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi6#)/8/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed2]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "#MinBarValue#+(((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw0*#multi2#+MeasureAudioRaw1*#multi1#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi6#)/8+(MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw1*#multi2#+MeasureAudioRaw3*#multi1#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi6#)/5)/2/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed3]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw1*#multi2#+MeasureAudioRaw3*#multi1#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi6#)/#Divider#/5)*MeasureAudioMultipler"]
[MeasureAudioSmoothed4]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "#MinBarValue#+(((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw1*#multi3#+MeasureAudioRaw1*#multi2#+MeasureAudioRaw3*#multi1#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi6#)/5+(MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw1*#multi3#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi1#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi6#)/3)/2/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed5]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw1*#multi3#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi1#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed6]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "#MinBarValue#+(((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw0*#multi4#+MeasureAudioRaw0*#multi3#+MeasureAudioRaw3*#multi2#+MeasureAudioRaw5*#multi1#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi6#)/3+(MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw1*#multi4#+MeasureAudioRaw3*#multi3#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi1#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi6#)/2.8)/2/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed7]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw1*#multi4#+MeasureAudioRaw3*#multi3#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi1#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi6#)/#Divider#/2.8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed8]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "#MinBarValue#+(((MeasureAudioRaw0*#multi6#+MeasureAudioRaw0*#multi5#+MeasureAudioRaw1*#multi4#+MeasureAudioRaw3*#multi3#+MeasureAudioRaw5*#multi2#+MeasureAudioRaw7*#multi1#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi6#)/2.8+(MeasureAudioRaw0*#multi6#+MeasureAudioRaw1*#multi5#+MeasureAudioRaw3*#multi4#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi1#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi6#)/3)/2/#Divider#)*MeasureAudioMultipler"]
[MeasureAudioSmoothed9]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw1*#multi5#+MeasureAudioRaw3*#multi4#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi1#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed10]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "#MinBarValue#+((MeasureAudioRaw0*#multi6#+MeasureAudioRaw1*#multi5#+MeasureAudioRaw3*#multi4#+MeasureAudioRaw5*#multi3#+MeasureAudioRaw7*#multi2#+MeasureAudioRaw9*#multi1#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi6#+MeasureAudioRaw1*#multi6#+MeasureAudioRaw3*#multi5#+MeasureAudioRaw5*#multi4#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi1#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed11]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "#MinBarValue#+((MeasureAudioRaw1*#multi6#+MeasureAudioRaw3*#multi5#+MeasureAudioRaw5*#multi4#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi1#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed12]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "#MinBarValue#+((MeasureAudioRaw1*#multi6#+MeasureAudioRaw3*#multi5#+MeasureAudioRaw5*#multi4#+MeasureAudioRaw7*#multi3#+MeasureAudioRaw9*#multi2#+MeasureAudioRaw11*#multi1#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi6#+MeasureAudioRaw3*#multi6#+MeasureAudioRaw5*#multi5#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi1#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed13]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "#MinBarValue#+((MeasureAudioRaw3*#multi6#+MeasureAudioRaw5*#multi5#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi1#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed14]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "#MinBarValue#+((MeasureAudioRaw3*#multi6#+MeasureAudioRaw5*#multi5#+MeasureAudioRaw7*#multi4#+MeasureAudioRaw9*#multi3#+MeasureAudioRaw11*#multi2#+MeasureAudioRaw13*#multi1#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi6#+MeasureAudioRaw5*#multi6#+MeasureAudioRaw7*#multi5#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi1#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed15]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "#MinBarValue#+((MeasureAudioRaw5*#multi6#+MeasureAudioRaw7*#multi5#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi1#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed16]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "#MinBarValue#+((MeasureAudioRaw5*#multi6#+MeasureAudioRaw7*#multi5#+MeasureAudioRaw9*#multi4#+MeasureAudioRaw11*#multi3#+MeasureAudioRaw13*#multi2#+MeasureAudioRaw15*#multi1#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi6#+MeasureAudioRaw7*#multi6#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi1#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed17]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "#MinBarValue#+((MeasureAudioRaw7*#multi6#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi1#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed18]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "#MinBarValue#+((MeasureAudioRaw7*#multi6#+MeasureAudioRaw9*#multi5#+MeasureAudioRaw11*#multi4#+MeasureAudioRaw13*#multi3#+MeasureAudioRaw15*#multi2#+MeasureAudioRaw17*#multi1#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi6#+MeasureAudioRaw9*#multi6#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi1#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed19]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "#MinBarValue#+((MeasureAudioRaw9*#multi6#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi1#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed20]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "#MinBarValue#+((MeasureAudioRaw9*#multi6#+MeasureAudioRaw11*#multi5#+MeasureAudioRaw13*#multi4#+MeasureAudioRaw15*#multi3#+MeasureAudioRaw17*#multi2#+MeasureAudioRaw19*#multi1#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi6#+MeasureAudioRaw11*#multi6#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi1#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed21]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "#MinBarValue#+((MeasureAudioRaw11*#multi6#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi1#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed22]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "#MinBarValue#+((MeasureAudioRaw11*#multi6#+MeasureAudioRaw13*#multi5#+MeasureAudioRaw15*#multi4#+MeasureAudioRaw17*#multi3#+MeasureAudioRaw19*#multi2#+MeasureAudioRaw21*#multi1#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi6#+MeasureAudioRaw13*#multi6#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi1#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed23]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "#MinBarValue#+((MeasureAudioRaw13*#multi6#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi1#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed24]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "#MinBarValue#+((MeasureAudioRaw13*#multi6#+MeasureAudioRaw15*#multi5#+MeasureAudioRaw17*#multi4#+MeasureAudioRaw19*#multi3#+MeasureAudioRaw21*#multi2#+MeasureAudioRaw23*#multi1#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi6#+MeasureAudioRaw15*#multi6#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi1#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed25]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "#MinBarValue#+((MeasureAudioRaw15*#multi6#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi1#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed26]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "#MinBarValue#+((MeasureAudioRaw15*#multi6#+MeasureAudioRaw17*#multi5#+MeasureAudioRaw19*#multi4#+MeasureAudioRaw21*#multi3#+MeasureAudioRaw23*#multi2#+MeasureAudioRaw25*#multi1#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi6#+MeasureAudioRaw17*#multi6#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi1#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed27]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "#MinBarValue#+((MeasureAudioRaw17*#multi6#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi1#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed28]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "#MinBarValue#+((MeasureAudioRaw17*#multi6#+MeasureAudioRaw19*#multi5#+MeasureAudioRaw21*#multi4#+MeasureAudioRaw23*#multi3#+MeasureAudioRaw25*#multi2#+MeasureAudioRaw27*#multi1#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi6#+MeasureAudioRaw19*#multi6#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi1#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed29]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "#MinBarValue#+((MeasureAudioRaw19*#multi6#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi1#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed30]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "#MinBarValue#+((MeasureAudioRaw19*#multi6#+MeasureAudioRaw21*#multi5#+MeasureAudioRaw23*#multi4#+MeasureAudioRaw25*#multi3#+MeasureAudioRaw27*#multi2#+MeasureAudioRaw29*#multi1#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi6#+MeasureAudioRaw21*#multi6#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi1#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed31]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "#MinBarValue#+((MeasureAudioRaw21*#multi6#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi1#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed32]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "#MinBarValue#+((MeasureAudioRaw21*#multi6#+MeasureAudioRaw23*#multi5#+MeasureAudioRaw25*#multi4#+MeasureAudioRaw27*#multi3#+MeasureAudioRaw29*#multi2#+MeasureAudioRaw31*#multi1#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi6#+MeasureAudioRaw23*#multi6#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi1#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed33]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "#MinBarValue#+((MeasureAudioRaw23*#multi6#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi1#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed34]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "#MinBarValue#+((MeasureAudioRaw23*#multi6#+MeasureAudioRaw25*#multi5#+MeasureAudioRaw27*#multi4#+MeasureAudioRaw29*#multi3#+MeasureAudioRaw31*#multi2#+MeasureAudioRaw33*#multi1#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi6#+MeasureAudioRaw25*#multi6#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi1#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed35]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "#MinBarValue#+((MeasureAudioRaw25*#multi6#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi1#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed36]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "#MinBarValue#+((MeasureAudioRaw25*#multi6#+MeasureAudioRaw27*#multi5#+MeasureAudioRaw29*#multi4#+MeasureAudioRaw31*#multi3#+MeasureAudioRaw33*#multi2#+MeasureAudioRaw35*#multi1#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi6#+MeasureAudioRaw27*#multi6#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi1#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed37]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "#MinBarValue#+((MeasureAudioRaw27*#multi6#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi1#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed38]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "#MinBarValue#+((MeasureAudioRaw27*#multi6#+MeasureAudioRaw29*#multi5#+MeasureAudioRaw31*#multi4#+MeasureAudioRaw33*#multi3#+MeasureAudioRaw35*#multi2#+MeasureAudioRaw37*#multi1#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi6#+MeasureAudioRaw29*#multi6#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi1#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed39]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "#MinBarValue#+((MeasureAudioRaw29*#multi6#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi1#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed40]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "#MinBarValue#+((MeasureAudioRaw29*#multi6#+MeasureAudioRaw31*#multi5#+MeasureAudioRaw33*#multi4#+MeasureAudioRaw35*#multi3#+MeasureAudioRaw37*#multi2#+MeasureAudioRaw39*#multi1#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi6#+MeasureAudioRaw31*#multi6#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi1#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed41]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "#MinBarValue#+((MeasureAudioRaw31*#multi6#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi1#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed42]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "#MinBarValue#+((MeasureAudioRaw31*#multi6#+MeasureAudioRaw33*#multi5#+MeasureAudioRaw35*#multi4#+MeasureAudioRaw37*#multi3#+MeasureAudioRaw39*#multi2#+MeasureAudioRaw41*#multi1#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi6#+MeasureAudioRaw33*#multi6#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi1#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed43]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "#MinBarValue#+((MeasureAudioRaw33*#multi6#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi1#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed44]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "#MinBarValue#+((MeasureAudioRaw33*#multi6#+MeasureAudioRaw35*#multi5#+MeasureAudioRaw37*#multi4#+MeasureAudioRaw39*#multi3#+MeasureAudioRaw41*#multi2#+MeasureAudioRaw43*#multi1#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi6#+MeasureAudioRaw35*#multi6#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi1#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed45]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "#MinBarValue#+((MeasureAudioRaw35*#multi6#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi1#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed46]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "#MinBarValue#+((MeasureAudioRaw35*#multi6#+MeasureAudioRaw37*#multi5#+MeasureAudioRaw39*#multi4#+MeasureAudioRaw41*#multi3#+MeasureAudioRaw43*#multi2#+MeasureAudioRaw45*#multi1#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi6#+MeasureAudioRaw37*#multi6#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi1#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed47]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "#MinBarValue#+((MeasureAudioRaw37*#multi6#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi1#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed48]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "#MinBarValue#+((MeasureAudioRaw37*#multi6#+MeasureAudioRaw39*#multi5#+MeasureAudioRaw41*#multi4#+MeasureAudioRaw43*#multi3#+MeasureAudioRaw45*#multi2#+MeasureAudioRaw47*#multi1#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi6#+MeasureAudioRaw39*#multi6#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi1#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed49]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "#MinBarValue#+((MeasureAudioRaw39*#multi6#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi1#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed50]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "#MinBarValue#+((MeasureAudioRaw39*#multi6#+MeasureAudioRaw41*#multi5#+MeasureAudioRaw43*#multi4#+MeasureAudioRaw45*#multi3#+MeasureAudioRaw47*#multi2#+MeasureAudioRaw49*#multi1#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi6#+MeasureAudioRaw41*#multi6#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi1#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed51]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "#MinBarValue#+((MeasureAudioRaw41*#multi6#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi1#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed52]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "#MinBarValue#+((MeasureAudioRaw41*#multi6#+MeasureAudioRaw43*#multi5#+MeasureAudioRaw45*#multi4#+MeasureAudioRaw47*#multi3#+MeasureAudioRaw49*#multi2#+MeasureAudioRaw51*#multi1#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi6#+MeasureAudioRaw43*#multi6#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi1#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed53]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "#MinBarValue#+((MeasureAudioRaw43*#multi6#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi1#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed54]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "#MinBarValue#+((MeasureAudioRaw43*#multi6#+MeasureAudioRaw45*#multi5#+MeasureAudioRaw47*#multi4#+MeasureAudioRaw49*#multi3#+MeasureAudioRaw51*#multi2#+MeasureAudioRaw53*#multi1#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi6#+MeasureAudioRaw45*#multi6#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi1#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw63*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed55]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "#MinBarValue#+((MeasureAudioRaw45*#multi6#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi1#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw63*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed56]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "#MinBarValue#+((MeasureAudioRaw45*#multi6#+MeasureAudioRaw47*#multi5#+MeasureAudioRaw49*#multi4#+MeasureAudioRaw51*#multi3#+MeasureAudioRaw53*#multi2#+MeasureAudioRaw55*#multi1#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw63*#multi6#+MeasureAudioRaw47*#multi6#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi1#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw63*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed57]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "#MinBarValue#+((MeasureAudioRaw47*#multi6#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi1#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw65*#multi5#+MeasureAudioRaw67*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed58]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "#MinBarValue#+((MeasureAudioRaw47*#multi6#+MeasureAudioRaw49*#multi5#+MeasureAudioRaw51*#multi4#+MeasureAudioRaw53*#multi3#+MeasureAudioRaw55*#multi2#+MeasureAudioRaw57*#multi1#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw65*#multi5#+MeasureAudioRaw67*#multi6#+MeasureAudioRaw49*#multi6#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi1#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed59]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "#MinBarValue#+((MeasureAudioRaw49*#multi6#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi1#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed60]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "#MinBarValue#+((MeasureAudioRaw49*#multi6#+MeasureAudioRaw51*#multi5#+MeasureAudioRaw53*#multi4#+MeasureAudioRaw55*#multi3#+MeasureAudioRaw57*#multi2#+MeasureAudioRaw59*#multi1#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi6#+MeasureAudioRaw51*#multi6#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi1#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi3#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed61]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "#MinBarValue#+((MeasureAudioRaw51*#multi6#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi1#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi3#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed62]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "#MinBarValue#+((MeasureAudioRaw51*#multi6#+MeasureAudioRaw53*#multi5#+MeasureAudioRaw55*#multi4#+MeasureAudioRaw57*#multi3#+MeasureAudioRaw59*#multi2#+MeasureAudioRaw61*#multi1#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi3#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi6#+MeasureAudioRaw53*#multi6#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi1#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed63]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "#MinBarValue#+((MeasureAudioRaw53*#multi6#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi1#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed64]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "#MinBarValue#+((MeasureAudioRaw53*#multi6#+MeasureAudioRaw55*#multi5#+MeasureAudioRaw57*#multi4#+MeasureAudioRaw59*#multi3#+MeasureAudioRaw61*#multi2#+MeasureAudioRaw63*#multi1#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi6#+MeasureAudioRaw55*#multi6#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi1#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed65]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "#MinBarValue#+((MeasureAudioRaw55*#multi6#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi1#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed66]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "#MinBarValue#+((MeasureAudioRaw55*#multi6#+MeasureAudioRaw57*#multi5#+MeasureAudioRaw59*#multi4#+MeasureAudioRaw61*#multi3#+MeasureAudioRaw63*#multi2#+MeasureAudioRaw65*#multi1#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi6#+MeasureAudioRaw57*#multi6#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi1#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw77*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed67]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "#MinBarValue#+((MeasureAudioRaw57*#multi6#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi1#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw77*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed68]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "#MinBarValue#+((MeasureAudioRaw57*#multi6#+MeasureAudioRaw59*#multi5#+MeasureAudioRaw61*#multi4#+MeasureAudioRaw63*#multi3#+MeasureAudioRaw65*#multi2#+MeasureAudioRaw67*#multi1#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw79*#multi6#+MeasureAudioRaw59*#multi6#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw66*#multi3#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi1#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed69]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "#MinBarValue#+((MeasureAudioRaw59*#multi6#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw66*#multi3#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi1#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed70]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "#MinBarValue#+((MeasureAudioRaw59*#multi6#+MeasureAudioRaw61*#multi5#+MeasureAudioRaw63*#multi4#+MeasureAudioRaw66*#multi3#+MeasureAudioRaw67*#multi2#+MeasureAudioRaw69*#multi1#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi6#+MeasureAudioRaw61*#multi6#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed71]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "#MinBarValue#+((MeasureAudioRaw61*#multi6#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed72]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "#MinBarValue#+((MeasureAudioRaw61*#multi6#+MeasureAudioRaw63*#multi5#+MeasureAudioRaw65*#multi4#+MeasureAudioRaw67*#multi3#+MeasureAudioRaw69*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi6#+MeasureAudioRaw63*#multi6#+MeasureAudioRaw65*#multi5#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi1#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed73]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "#MinBarValue#+((MeasureAudioRaw63*#multi6#+MeasureAudioRaw65*#multi5#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi1#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed74]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "#MinBarValue#+((MeasureAudioRaw63*#multi6#+MeasureAudioRaw65*#multi5#+MeasureAudioRaw67*#multi4#+MeasureAudioRaw69*#multi3#+MeasureAudioRaw71*#multi2#+MeasureAudioRaw73*#multi1#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi6#+MeasureAudioRaw65*#multi6#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi1#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed75]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "#MinBarValue#+((MeasureAudioRaw65*#multi6#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi1#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed76]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "#MinBarValue#+((MeasureAudioRaw65*#multi6#+MeasureAudioRaw67*#multi5#+MeasureAudioRaw69*#multi4#+MeasureAudioRaw71*#multi3#+MeasureAudioRaw73*#multi2#+MeasureAudioRaw75*#multi1#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi6#+MeasureAudioRaw67*#multi6#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi1#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed77]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "#MinBarValue#+((MeasureAudioRaw67*#multi6#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi1#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed78]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "#MinBarValue#+((MeasureAudioRaw67*#multi6#+MeasureAudioRaw69*#multi5#+MeasureAudioRaw71*#multi4#+MeasureAudioRaw73*#multi3#+MeasureAudioRaw75*#multi2#+MeasureAudioRaw77*#multi1#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi6#+MeasureAudioRaw69*#multi6#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed79]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "#MinBarValue#+((MeasureAudioRaw69*#multi6#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed80]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "#MinBarValue#+((MeasureAudioRaw69*#multi6#+MeasureAudioRaw71*#multi5#+MeasureAudioRaw73*#multi4#+MeasureAudioRaw75*#multi3#+MeasureAudioRaw77*#multi2#+MeasureAudioRaw71*#multi1#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi6#+MeasureAudioRaw71*#multi6#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi1#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed81]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "#MinBarValue#+((MeasureAudioRaw71*#multi6#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi1#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed82]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "#MinBarValue#+((MeasureAudioRaw71*#multi6#+MeasureAudioRaw73*#multi5#+MeasureAudioRaw75*#multi4#+MeasureAudioRaw77*#multi3#+MeasureAudioRaw79*#multi2#+MeasureAudioRaw81*#multi1#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi6#+MeasureAudioRaw73*#multi6#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi1#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi5#+MeasureAudioRaw93*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed83]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "#MinBarValue#+((MeasureAudioRaw73*#multi6#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi1#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi5#+MeasureAudioRaw93*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed84]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "#MinBarValue#+((MeasureAudioRaw73*#multi6#+MeasureAudioRaw75*#multi5#+MeasureAudioRaw77*#multi4#+MeasureAudioRaw79*#multi3#+MeasureAudioRaw81*#multi2#+MeasureAudioRaw83*#multi1#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi5#+MeasureAudioRaw93*#multi6#+MeasureAudioRaw75*#multi6#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi1#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi5#+MeasureAudioRaw95*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed85]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "#MinBarValue#+((MeasureAudioRaw75*#multi6#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi1#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi5#+MeasureAudioRaw95*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed86]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "#MinBarValue#+((MeasureAudioRaw75*#multi6#+MeasureAudioRaw77*#multi5#+MeasureAudioRaw79*#multi4#+MeasureAudioRaw81*#multi3#+MeasureAudioRaw83*#multi2#+MeasureAudioRaw85*#multi1#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi5#+MeasureAudioRaw95*#multi6#+MeasureAudioRaw77*#multi6#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi1#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi4#+MeasureAudioRaw95*#multi5#+MeasureAudioRaw97*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed87]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "#MinBarValue#+((MeasureAudioRaw77*#multi6#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi1#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi4#+MeasureAudioRaw95*#multi5#+MeasureAudioRaw97*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed88]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "#MinBarValue#+((MeasureAudioRaw77*#multi6#+MeasureAudioRaw79*#multi5#+MeasureAudioRaw81*#multi4#+MeasureAudioRaw83*#multi3#+MeasureAudioRaw85*#multi2#+MeasureAudioRaw87*#multi1#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi4#+MeasureAudioRaw95*#multi5#+MeasureAudioRaw97*#multi6#+MeasureAudioRaw79*#multi6#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi1#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi4#+MeasureAudioRaw97*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed89]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "#MinBarValue#+((MeasureAudioRaw79*#multi6#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi1#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi4#+MeasureAudioRaw97*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed90]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "#MinBarValue#+((MeasureAudioRaw79*#multi6#+MeasureAudioRaw81*#multi5#+MeasureAudioRaw83*#multi4#+MeasureAudioRaw85*#multi3#+MeasureAudioRaw87*#multi2#+MeasureAudioRaw89*#multi1#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi4#+MeasureAudioRaw97*#multi5#+MeasureAudioRaw99*#multi6#+MeasureAudioRaw81*#multi6#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi1#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi3#+MeasureAudioRaw97*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed91]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "#MinBarValue#+((MeasureAudioRaw81*#multi6#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi1#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi3#+MeasureAudioRaw97*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/4)*MeasureAudioMultipler"]
[MeasureAudioSmoothed92]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "#MinBarValue#+((MeasureAudioRaw81*#multi6#+MeasureAudioRaw83*#multi5#+MeasureAudioRaw85*#multi4#+MeasureAudioRaw87*#multi3#+MeasureAudioRaw89*#multi2#+MeasureAudioRaw91*#multi1#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi3#+MeasureAudioRaw97*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#+MeasureAudioRaw83*#multi6#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi1#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/5)*MeasureAudioMultipler"]
[MeasureAudioSmoothed93]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "#MinBarValue#+((MeasureAudioRaw83*#multi6#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi1#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/6)*MeasureAudioMultipler"]
[MeasureAudioSmoothed94]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "#MinBarValue#+((MeasureAudioRaw83*#multi6#+MeasureAudioRaw85*#multi5#+MeasureAudioRaw87*#multi4#+MeasureAudioRaw89*#multi3#+MeasureAudioRaw91*#multi2#+MeasureAudioRaw93*#multi1#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#+MeasureAudioRaw85*#multi6#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi1#+MeasureAudioRaw97*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/7)*MeasureAudioMultipler"]
[MeasureAudioSmoothed95]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "#MinBarValue#+((MeasureAudioRaw85*#multi6#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi1#+MeasureAudioRaw97*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed96]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "#MinBarValue#+((MeasureAudioRaw85*#multi6#+MeasureAudioRaw87*#multi5#+MeasureAudioRaw89*#multi4#+MeasureAudioRaw91*#multi3#+MeasureAudioRaw93*#multi2#+MeasureAudioRaw95*#multi1#+MeasureAudioRaw97*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#+MeasureAudioRaw87*#multi6#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi1#+MeasureAudioRaw99*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/9)*MeasureAudioMultipler"]
[MeasureAudioSmoothed97]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "#MinBarValue#+((MeasureAudioRaw87*#multi6#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi1#+MeasureAudioRaw99*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/10)*MeasureAudioMultipler"]
[MeasureAudioSmoothed98]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "#MinBarValue#+((MeasureAudioRaw87*#multi6#+MeasureAudioRaw89*#multi5#+MeasureAudioRaw91*#multi4#+MeasureAudioRaw93*#multi3#+MeasureAudioRaw95*#multi2#+MeasureAudioRaw97*#multi1#+MeasureAudioRaw99*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#+MeasureAudioRaw89*#multi6#+MeasureAudioRaw91*#multi5#+MeasureAudioRaw93*#multi4#+MeasureAudioRaw95*#multi3#+MeasureAudioRaw97*#multi2#+MeasureAudioRaw99*#multi1#+MeasureAudioRaw99*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/2/#Divider#/11)*MeasureAudioMultipler"]
[MeasureAudioSmoothed99]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "#MinBarValue#+((MeasureAudioRaw89*#multi6#+MeasureAudioRaw91*#multi5#+MeasureAudioRaw93*#multi4#+MeasureAudioRaw95*#multi3#+MeasureAudioRaw97*#multi2#+MeasureAudioRaw99*#multi1#+MeasureAudioRaw99*#multi2#+MeasureAudioRaw99*#multi3#+MeasureAudioRaw99*#multi4#+MeasureAudioRaw99*#multi5#+MeasureAudioRaw99*#multi6#)/#Divider#/12)*MeasureAudioMultipler"]