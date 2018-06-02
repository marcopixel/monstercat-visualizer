[MeasureAudioMultipler]
Measure=Calc
Formula=log(#Multiplier#)
UpdateDivider=-1

[MeasureAudioSmoothed0]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!Log "Audio measures disabled | AutoMute #EnableAutoMute#"][!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "#MinBarValue#"]
IfFalseAction=[!Log "Audio measures enabled | AutoMute #EnableAutoMute#"][!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "#MinBarValue#+((MeasureAudioRaw0+MeasureAudioRaw0+MeasureAudioRaw1)/12)*MeasureAudioMultipler"]
[MeasureAudioSmoothed1]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "#MinBarValue#+((MeasureAudioRaw0+MeasureAudioRaw1+MeasureAudioRaw2)/10)*MeasureAudioMultipler"]
[MeasureAudioSmoothed2]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "#MinBarValue#+((MeasureAudioRaw1+MeasureAudioRaw2+MeasureAudioRaw3)/8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed3]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "#MinBarValue#+((MeasureAudioRaw2+MeasureAudioRaw3+MeasureAudioRaw4)/6)*MeasureAudioMultipler"]
[MeasureAudioSmoothed4]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "#MinBarValue#+((MeasureAudioRaw3+MeasureAudioRaw4+MeasureAudioRaw5)/4)*MeasureAudioMultipler"]
[MeasureAudioSmoothed5]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "#MinBarValue#+((MeasureAudioRaw4+MeasureAudioRaw5+MeasureAudioRaw6)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed6]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "#MinBarValue#+((MeasureAudioRaw5+MeasureAudioRaw6+MeasureAudioRaw7)/2.8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed7]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "#MinBarValue#+((MeasureAudioRaw6+MeasureAudioRaw7+MeasureAudioRaw8)/2.8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed8]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "#MinBarValue#+((MeasureAudioRaw7+MeasureAudioRaw8+MeasureAudioRaw9)/2.8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed9]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "#MinBarValue#+((MeasureAudioRaw8+MeasureAudioRaw9+MeasureAudioRaw10)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed10]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "#MinBarValue#+((MeasureAudioRaw9+MeasureAudioRaw10+MeasureAudioRaw11)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed11]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "#MinBarValue#+((MeasureAudioRaw10+MeasureAudioRaw11+MeasureAudioRaw12)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed12]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "#MinBarValue#+((MeasureAudioRaw11+MeasureAudioRaw12+MeasureAudioRaw13)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed13]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "#MinBarValue#+((MeasureAudioRaw12+MeasureAudioRaw13+MeasureAudioRaw14)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed14]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "#MinBarValue#+((MeasureAudioRaw13+MeasureAudioRaw14+MeasureAudioRaw15)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed15]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "#MinBarValue#+((MeasureAudioRaw14+MeasureAudioRaw15+MeasureAudioRaw16)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed16]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "#MinBarValue#+((MeasureAudioRaw15+MeasureAudioRaw16+MeasureAudioRaw17)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed17]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "#MinBarValue#+((MeasureAudioRaw16+MeasureAudioRaw17+MeasureAudioRaw18)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed18]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "#MinBarValue#+((MeasureAudioRaw17+MeasureAudioRaw18+MeasureAudioRaw19)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed19]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "#MinBarValue#+((MeasureAudioRaw18+MeasureAudioRaw19+MeasureAudioRaw20)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed20]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "#MinBarValue#+((MeasureAudioRaw19+MeasureAudioRaw20+MeasureAudioRaw21)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed21]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "#MinBarValue#+((MeasureAudioRaw20+MeasureAudioRaw21+MeasureAudioRaw22)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed22]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "#MinBarValue#+((MeasureAudioRaw21+MeasureAudioRaw22+MeasureAudioRaw23)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed23]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "#MinBarValue#+((MeasureAudioRaw22+MeasureAudioRaw23+MeasureAudioRaw24)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed24]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "#MinBarValue#+((MeasureAudioRaw23+MeasureAudioRaw24+MeasureAudioRaw25)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed25]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "#MinBarValue#+((MeasureAudioRaw24+MeasureAudioRaw25+MeasureAudioRaw26)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed26]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "#MinBarValue#+((MeasureAudioRaw25+MeasureAudioRaw26+MeasureAudioRaw27)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed27]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "#MinBarValue#+((MeasureAudioRaw26+MeasureAudioRaw27+MeasureAudioRaw28)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed28]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "#MinBarValue#+((MeasureAudioRaw27+MeasureAudioRaw28+MeasureAudioRaw29)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed29]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "#MinBarValue#+((MeasureAudioRaw28+MeasureAudioRaw29+MeasureAudioRaw30)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed30]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "#MinBarValue#+((MeasureAudioRaw29+MeasureAudioRaw30+MeasureAudioRaw31)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed31]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "#MinBarValue#+((MeasureAudioRaw30+MeasureAudioRaw31+MeasureAudioRaw32)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed32]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "#MinBarValue#+((MeasureAudioRaw31+MeasureAudioRaw32+MeasureAudioRaw33)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed33]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "#MinBarValue#+((MeasureAudioRaw32+MeasureAudioRaw33+MeasureAudioRaw34)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed34]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "#MinBarValue#+((MeasureAudioRaw33+MeasureAudioRaw34+MeasureAudioRaw35)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed35]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "#MinBarValue#+((MeasureAudioRaw34+MeasureAudioRaw35+MeasureAudioRaw36)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed36]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "#MinBarValue#+((MeasureAudioRaw35+MeasureAudioRaw36+MeasureAudioRaw37)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed37]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "#MinBarValue#+((MeasureAudioRaw36+MeasureAudioRaw37+MeasureAudioRaw38)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed38]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "#MinBarValue#+((MeasureAudioRaw37+MeasureAudioRaw38+MeasureAudioRaw39)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed39]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "#MinBarValue#+((MeasureAudioRaw38+MeasureAudioRaw39+MeasureAudioRaw40)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed40]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "#MinBarValue#+((MeasureAudioRaw39+MeasureAudioRaw40+MeasureAudioRaw41)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed41]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "#MinBarValue#+((MeasureAudioRaw40+MeasureAudioRaw41+MeasureAudioRaw42)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed42]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "#MinBarValue#+((MeasureAudioRaw41+MeasureAudioRaw42+MeasureAudioRaw43)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed43]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "#MinBarValue#+((MeasureAudioRaw42+MeasureAudioRaw43+MeasureAudioRaw44)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed44]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "#MinBarValue#+((MeasureAudioRaw43+MeasureAudioRaw44+MeasureAudioRaw45)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed45]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "#MinBarValue#+((MeasureAudioRaw44+MeasureAudioRaw45+MeasureAudioRaw46)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed46]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "#MinBarValue#+((MeasureAudioRaw45+MeasureAudioRaw46+MeasureAudioRaw47)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed47]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "#MinBarValue#+((MeasureAudioRaw46+MeasureAudioRaw47+MeasureAudioRaw48)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed48]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "#MinBarValue#+((MeasureAudioRaw47+MeasureAudioRaw48+MeasureAudioRaw49)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed49]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "#MinBarValue#+((MeasureAudioRaw48+MeasureAudioRaw49+MeasureAudioRaw50)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed50]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "#MinBarValue#+((MeasureAudioRaw49+MeasureAudioRaw50+MeasureAudioRaw51)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed51]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "#MinBarValue#+((MeasureAudioRaw50+MeasureAudioRaw51+MeasureAudioRaw52)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed52]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "#MinBarValue#+((MeasureAudioRaw51+MeasureAudioRaw52+MeasureAudioRaw53)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed53]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "#MinBarValue#+((MeasureAudioRaw52+MeasureAudioRaw53+MeasureAudioRaw54)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed54]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "#MinBarValue#+((MeasureAudioRaw53+MeasureAudioRaw54+MeasureAudioRaw55)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed55]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "#MinBarValue#+((MeasureAudioRaw54+MeasureAudioRaw55+MeasureAudioRaw56)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed56]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "#MinBarValue#+((MeasureAudioRaw55+MeasureAudioRaw56+MeasureAudioRaw57)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed57]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "#MinBarValue#+((MeasureAudioRaw56+MeasureAudioRaw57+MeasureAudioRaw58)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed58]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "#MinBarValue#+((MeasureAudioRaw57+MeasureAudioRaw58+MeasureAudioRaw59)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed59]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "#MinBarValue#+((MeasureAudioRaw58+MeasureAudioRaw59+MeasureAudioRaw60)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed60]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "#MinBarValue#+((MeasureAudioRaw59+MeasureAudioRaw60+MeasureAudioRaw61)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed61]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "#MinBarValue#+((MeasureAudioRaw60+MeasureAudioRaw61+MeasureAudioRaw62)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed62]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "#MinBarValue#+((MeasureAudioRaw61+MeasureAudioRaw62+MeasureAudioRaw63)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed63]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "#MinBarValue#+((MeasureAudioRaw62+MeasureAudioRaw63+MeasureAudioRaw64)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed64]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "#MinBarValue#+((MeasureAudioRaw63+MeasureAudioRaw64+MeasureAudioRaw65)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed65]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "#MinBarValue#+((MeasureAudioRaw64+MeasureAudioRaw65+MeasureAudioRaw66)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed66]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "#MinBarValue#+((MeasureAudioRaw65+MeasureAudioRaw66+MeasureAudioRaw67)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed67]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "#MinBarValue#+((MeasureAudioRaw66+MeasureAudioRaw67+MeasureAudioRaw68)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed68]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "#MinBarValue#+((MeasureAudioRaw67+MeasureAudioRaw68+MeasureAudioRaw69)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed69]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "#MinBarValue#+((MeasureAudioRaw68+MeasureAudioRaw69+MeasureAudioRaw70)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed70]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "#MinBarValue#+((MeasureAudioRaw69+MeasureAudioRaw70+MeasureAudioRaw71)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed71]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "#MinBarValue#+((MeasureAudioRaw70+MeasureAudioRaw71+MeasureAudioRaw72)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed72]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "#MinBarValue#+((MeasureAudioRaw71+MeasureAudioRaw72+MeasureAudioRaw73)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed73]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "#MinBarValue#+((MeasureAudioRaw72+MeasureAudioRaw73+MeasureAudioRaw74)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed74]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "#MinBarValue#+((MeasureAudioRaw73+MeasureAudioRaw74+MeasureAudioRaw75)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed75]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "#MinBarValue#+((MeasureAudioRaw74+MeasureAudioRaw75+MeasureAudioRaw76)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed76]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "#MinBarValue#+((MeasureAudioRaw75+MeasureAudioRaw76+MeasureAudioRaw77)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed77]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "#MinBarValue#+((MeasureAudioRaw76+MeasureAudioRaw77+MeasureAudioRaw78)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed78]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "#MinBarValue#+((MeasureAudioRaw77+MeasureAudioRaw78+MeasureAudioRaw79)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed79]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "#MinBarValue#+((MeasureAudioRaw78+MeasureAudioRaw79+MeasureAudioRaw80)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed80]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "#MinBarValue#+((MeasureAudioRaw79+MeasureAudioRaw80+MeasureAudioRaw81)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed81]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "#MinBarValue#+((MeasureAudioRaw80+MeasureAudioRaw81+MeasureAudioRaw82)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed82]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "#MinBarValue#+((MeasureAudioRaw81+MeasureAudioRaw82+MeasureAudioRaw83)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed83]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "#MinBarValue#+((MeasureAudioRaw82+MeasureAudioRaw83+MeasureAudioRaw84)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed84]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "#MinBarValue#+((MeasureAudioRaw83+MeasureAudioRaw84+MeasureAudioRaw85)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed85]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "#MinBarValue#+((MeasureAudioRaw84+MeasureAudioRaw85+MeasureAudioRaw86)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed86]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "#MinBarValue#+((MeasureAudioRaw85+MeasureAudioRaw86+MeasureAudioRaw87)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed87]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "#MinBarValue#+((MeasureAudioRaw86+MeasureAudioRaw87+MeasureAudioRaw88)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed88]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "#MinBarValue#+((MeasureAudioRaw87+MeasureAudioRaw88+MeasureAudioRaw89)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed89]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "#MinBarValue#+((MeasureAudioRaw88+MeasureAudioRaw89+MeasureAudioRaw90)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed90]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "#MinBarValue#+((MeasureAudioRaw89+MeasureAudioRaw90+MeasureAudioRaw91)/3)*MeasureAudioMultipler"]
[MeasureAudioSmoothed91]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "#MinBarValue#+((MeasureAudioRaw90+MeasureAudioRaw91+MeasureAudioRaw92)/4)*MeasureAudioMultipler"]
[MeasureAudioSmoothed92]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "#MinBarValue#+((MeasureAudioRaw91+MeasureAudioRaw92+MeasureAudioRaw93)/5)*MeasureAudioMultipler"]
[MeasureAudioSmoothed93]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "#MinBarValue#+((MeasureAudioRaw92+MeasureAudioRaw93+MeasureAudioRaw94)/6)*MeasureAudioMultipler"]
[MeasureAudioSmoothed94]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "#MinBarValue#+((MeasureAudioRaw93+MeasureAudioRaw94+MeasureAudioRaw95)/7)*MeasureAudioMultipler"]
[MeasureAudioSmoothed95]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "#MinBarValue#+((MeasureAudioRaw94+MeasureAudioRaw95+MeasureAudioRaw96)/8)*MeasureAudioMultipler"]
[MeasureAudioSmoothed96]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "#MinBarValue#+((MeasureAudioRaw95+MeasureAudioRaw96+MeasureAudioRaw97)/9)*MeasureAudioMultipler"]
[MeasureAudioSmoothed97]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "#MinBarValue#+((MeasureAudioRaw96+MeasureAudioRaw97+MeasureAudioRaw98)/10)*MeasureAudioMultipler"]
[MeasureAudioSmoothed98]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "#MinBarValue#+((MeasureAudioRaw97+MeasureAudioRaw98+MeasureAudioRaw99)/11)*MeasureAudioMultipler"]
[MeasureAudioSmoothed99]
Measure=Calc
AverageSize=#AverageSize#
IfCondition=(#EnableAutoMute# = 1) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "#MinBarValue#+((MeasureAudioRaw98+MeasureAudioRaw99+MeasureAudioRaw99)/12)*MeasureAudioMultipler"]