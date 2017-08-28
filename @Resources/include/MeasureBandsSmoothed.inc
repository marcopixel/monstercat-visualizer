[MeasureAudioSmoothed0]
Measure=Calc
Formula=(MeasureAudioRaw0+MeasureAudioRaw0+MeasureAudioRaw1)/8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed0 Formula "(MeasureAudioRaw0+MeasureAudioRaw0+MeasureAudioRaw1)/12+#MinBarValue#"]
[MeasureAudioSmoothed1]
Measure=Calc
Formula=(MeasureAudioRaw0+MeasureAudioRaw1+MeasureAudioRaw2)/7+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed1 Formula "(MeasureAudioRaw0+MeasureAudioRaw1+MeasureAudioRaw2)/12+#MinBarValue#"]
[MeasureAudioSmoothed2]
Measure=Calc
Formula=(MeasureAudioRaw1+MeasureAudioRaw2+MeasureAudioRaw3)/6+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed2 Formula "(MeasureAudioRaw1+MeasureAudioRaw2+MeasureAudioRaw3)/10+#MinBarValue#"]
[MeasureAudioSmoothed3]
Measure=Calc
Formula=(MeasureAudioRaw2+MeasureAudioRaw3+MeasureAudioRaw4)/5+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed3 Formula "(MeasureAudioRaw2+MeasureAudioRaw3+MeasureAudioRaw4)/8+#MinBarValue#"]
[MeasureAudioSmoothed4]
Measure=Calc
Formula=(MeasureAudioRaw3+MeasureAudioRaw4+MeasureAudioRaw5)/4+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed4 Formula "(MeasureAudioRaw3+MeasureAudioRaw4+MeasureAudioRaw5)/7+#MinBarValue#"]
[MeasureAudioSmoothed5]
Measure=Calc
Formula=(MeasureAudioRaw4+MeasureAudioRaw5+MeasureAudioRaw6)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed5 Formula "(MeasureAudioRaw4+MeasureAudioRaw5+MeasureAudioRaw6)/6+#MinBarValue#"]
[MeasureAudioSmoothed6]
Measure=Calc
Formula=(MeasureAudioRaw5+MeasureAudioRaw6+MeasureAudioRaw7)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed6 Formula "(MeasureAudioRaw5+MeasureAudioRaw6+MeasureAudioRaw7)/5+#MinBarValue#"]
[MeasureAudioSmoothed7]
Measure=Calc
Formula=(MeasureAudioRaw6+MeasureAudioRaw7+MeasureAudioRaw8)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed7 Formula "(MeasureAudioRaw6+MeasureAudioRaw7+MeasureAudioRaw8)/4+#MinBarValue#"]
[MeasureAudioSmoothed8]
Measure=Calc
Formula=(MeasureAudioRaw7+MeasureAudioRaw8+MeasureAudioRaw9)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed8 Formula "(MeasureAudioRaw7+MeasureAudioRaw8+MeasureAudioRaw9)/3+#MinBarValue#"]
[MeasureAudioSmoothed9]
Measure=Calc
Formula=(MeasureAudioRaw8+MeasureAudioRaw9+MeasureAudioRaw10)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed9 Formula "(MeasureAudioRaw8+MeasureAudioRaw9+MeasureAudioRaw10)/2+#MinBarValue#"]
[MeasureAudioSmoothed10]
Measure=Calc
Formula=(MeasureAudioRaw9+MeasureAudioRaw10+MeasureAudioRaw11)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed10 Formula "(MeasureAudioRaw9+MeasureAudioRaw10+MeasureAudioRaw11)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed11]
Measure=Calc
Formula=(MeasureAudioRaw10+MeasureAudioRaw11+MeasureAudioRaw12)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed11 Formula "(MeasureAudioRaw10+MeasureAudioRaw11+MeasureAudioRaw12)/2+#MinBarValue#"]
[MeasureAudioSmoothed12]
Measure=Calc
Formula=(MeasureAudioRaw11+MeasureAudioRaw12+MeasureAudioRaw13)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed12 Formula "(MeasureAudioRaw11+MeasureAudioRaw12+MeasureAudioRaw13)/2.5+#MinBarValue#"]
[MeasureAudioSmoothed13]
Measure=Calc
Formula=(MeasureAudioRaw12+MeasureAudioRaw13+MeasureAudioRaw14)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed13 Formula "(MeasureAudioRaw12+MeasureAudioRaw13+MeasureAudioRaw14)/3+#MinBarValue#"]
[MeasureAudioSmoothed14]
Measure=Calc
Formula=(MeasureAudioRaw13+MeasureAudioRaw14+MeasureAudioRaw15)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed14 Formula "(MeasureAudioRaw13+MeasureAudioRaw14+MeasureAudioRaw15)/3+#MinBarValue#"]
[MeasureAudioSmoothed15]
Measure=Calc
Formula=(MeasureAudioRaw14+MeasureAudioRaw15+MeasureAudioRaw16)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed15 Formula "(MeasureAudioRaw14+MeasureAudioRaw15+MeasureAudioRaw16)/3+#MinBarValue#"]
[MeasureAudioSmoothed16]
Measure=Calc
Formula=(MeasureAudioRaw15+MeasureAudioRaw16+MeasureAudioRaw17)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed16 Formula "(MeasureAudioRaw15+MeasureAudioRaw16+MeasureAudioRaw17)/3.25+#MinBarValue#"]
[MeasureAudioSmoothed17]
Measure=Calc
Formula=(MeasureAudioRaw16+MeasureAudioRaw17+MeasureAudioRaw18)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed17 Formula "(MeasureAudioRaw16+MeasureAudioRaw17+MeasureAudioRaw18)/3.25+#MinBarValue#"]
[MeasureAudioSmoothed18]
Measure=Calc
Formula=(MeasureAudioRaw17+MeasureAudioRaw18+MeasureAudioRaw19)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed18 Formula "(MeasureAudioRaw17+MeasureAudioRaw18+MeasureAudioRaw19)/3+#MinBarValue#"]
[MeasureAudioSmoothed19]
Measure=Calc
Formula=(MeasureAudioRaw18+MeasureAudioRaw19+MeasureAudioRaw20)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed19 Formula "(MeasureAudioRaw18+MeasureAudioRaw19+MeasureAudioRaw20)/3+#MinBarValue#"]
[MeasureAudioSmoothed20]
Measure=Calc
Formula=(MeasureAudioRaw19+MeasureAudioRaw20+MeasureAudioRaw21)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed20 Formula "(MeasureAudioRaw19+MeasureAudioRaw20+MeasureAudioRaw21)/3+#MinBarValue#"]
[MeasureAudioSmoothed21]
Measure=Calc
Formula=(MeasureAudioRaw20+MeasureAudioRaw21+MeasureAudioRaw22)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed21 Formula "(MeasureAudioRaw20+MeasureAudioRaw21+MeasureAudioRaw22)/2.5+#MinBarValue#"]
[MeasureAudioSmoothed22]
Measure=Calc
Formula=(MeasureAudioRaw21+MeasureAudioRaw22+MeasureAudioRaw23)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed22 Formula "(MeasureAudioRaw21+MeasureAudioRaw22+MeasureAudioRaw23)/2+#MinBarValue#"]
[MeasureAudioSmoothed23]
Measure=Calc
Formula=(MeasureAudioRaw22+MeasureAudioRaw23+MeasureAudioRaw24)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed23 Formula "(MeasureAudioRaw22+MeasureAudioRaw23+MeasureAudioRaw24)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed24]
Measure=Calc
Formula=(MeasureAudioRaw23+MeasureAudioRaw24+MeasureAudioRaw25)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed24 Formula "(MeasureAudioRaw23+MeasureAudioRaw24+MeasureAudioRaw25)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed25]
Measure=Calc
Formula=(MeasureAudioRaw24+MeasureAudioRaw25+MeasureAudioRaw26)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed25 Formula "(MeasureAudioRaw24+MeasureAudioRaw25+MeasureAudioRaw26)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed26]
Measure=Calc
Formula=(MeasureAudioRaw25+MeasureAudioRaw26+MeasureAudioRaw27)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed26 Formula "(MeasureAudioRaw25+MeasureAudioRaw26+MeasureAudioRaw27)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed27]
Measure=Calc
Formula=(MeasureAudioRaw26+MeasureAudioRaw27+MeasureAudioRaw28)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed27 Formula "(MeasureAudioRaw26+MeasureAudioRaw27+MeasureAudioRaw28)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed28]
Measure=Calc
Formula=(MeasureAudioRaw27+MeasureAudioRaw28+MeasureAudioRaw29)/2.5+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed28 Formula "(MeasureAudioRaw27+MeasureAudioRaw28+MeasureAudioRaw29)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed29]
Measure=Calc
Formula=(MeasureAudioRaw28+MeasureAudioRaw29+MeasureAudioRaw30)/2+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed29 Formula "(MeasureAudioRaw28+MeasureAudioRaw29+MeasureAudioRaw30)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed30]
Measure=Calc
Formula=(MeasureAudioRaw29+MeasureAudioRaw30+MeasureAudioRaw31)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed30 Formula "(MeasureAudioRaw29+MeasureAudioRaw30+MeasureAudioRaw31)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed31]
Measure=Calc
Formula=(MeasureAudioRaw30+MeasureAudioRaw31+MeasureAudioRaw32)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed31 Formula "(MeasureAudioRaw30+MeasureAudioRaw31+MeasureAudioRaw32)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed32]
Measure=Calc
Formula=(MeasureAudioRaw31+MeasureAudioRaw32+MeasureAudioRaw33)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed32 Formula "(MeasureAudioRaw31+MeasureAudioRaw32+MeasureAudioRaw33)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed33]
Measure=Calc
Formula=(MeasureAudioRaw32+MeasureAudioRaw33+MeasureAudioRaw34)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed33 Formula "(MeasureAudioRaw32+MeasureAudioRaw33+MeasureAudioRaw34)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed34]
Measure=Calc
Formula=(MeasureAudioRaw33+MeasureAudioRaw34+MeasureAudioRaw35)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed34 Formula "(MeasureAudioRaw33+MeasureAudioRaw34+MeasureAudioRaw35)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed35]
Measure=Calc
Formula=(MeasureAudioRaw34+MeasureAudioRaw35+MeasureAudioRaw36)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed35 Formula "(MeasureAudioRaw34+MeasureAudioRaw35+MeasureAudioRaw36)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed36]
Measure=Calc
Formula=(MeasureAudioRaw35+MeasureAudioRaw36+MeasureAudioRaw37)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed36 Formula "(MeasureAudioRaw35+MeasureAudioRaw36+MeasureAudioRaw37)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed37]
Measure=Calc
Formula=(MeasureAudioRaw36+MeasureAudioRaw37+MeasureAudioRaw38)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed37 Formula "(MeasureAudioRaw36+MeasureAudioRaw37+MeasureAudioRaw38)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed38]
Measure=Calc
Formula=(MeasureAudioRaw37+MeasureAudioRaw38+MeasureAudioRaw39)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed38 Formula "(MeasureAudioRaw37+MeasureAudioRaw38+MeasureAudioRaw39)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed39]
Measure=Calc
Formula=(MeasureAudioRaw38+MeasureAudioRaw39+MeasureAudioRaw40)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed39 Formula "(MeasureAudioRaw38+MeasureAudioRaw39+MeasureAudioRaw40)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed40]
Measure=Calc
Formula=(MeasureAudioRaw39+MeasureAudioRaw40+MeasureAudioRaw41)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed40 Formula "(MeasureAudioRaw39+MeasureAudioRaw40+MeasureAudioRaw41)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed41]
Measure=Calc
Formula=(MeasureAudioRaw40+MeasureAudioRaw41+MeasureAudioRaw42)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed41 Formula "(MeasureAudioRaw40+MeasureAudioRaw41+MeasureAudioRaw42)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed42]
Measure=Calc
Formula=(MeasureAudioRaw41+MeasureAudioRaw42+MeasureAudioRaw43)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed42 Formula "(MeasureAudioRaw41+MeasureAudioRaw42+MeasureAudioRaw43)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed43]
Measure=Calc
Formula=(MeasureAudioRaw42+MeasureAudioRaw43+MeasureAudioRaw44)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed43 Formula "(MeasureAudioRaw42+MeasureAudioRaw43+MeasureAudioRaw44)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed44]
Measure=Calc
Formula=(MeasureAudioRaw43+MeasureAudioRaw44+MeasureAudioRaw45)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed44 Formula "(MeasureAudioRaw43+MeasureAudioRaw44+MeasureAudioRaw45)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed45]
Measure=Calc
Formula=(MeasureAudioRaw44+MeasureAudioRaw45+MeasureAudioRaw46)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed45 Formula "(MeasureAudioRaw44+MeasureAudioRaw45+MeasureAudioRaw46)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed46]
Measure=Calc
Formula=(MeasureAudioRaw45+MeasureAudioRaw46+MeasureAudioRaw47)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed46 Formula "(MeasureAudioRaw45+MeasureAudioRaw46+MeasureAudioRaw47)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed47]
Measure=Calc
Formula=(MeasureAudioRaw46+MeasureAudioRaw47+MeasureAudioRaw48)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed47 Formula "(MeasureAudioRaw46+MeasureAudioRaw47+MeasureAudioRaw48)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed48]
Measure=Calc
Formula=(MeasureAudioRaw47+MeasureAudioRaw48+MeasureAudioRaw49)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed48 Formula "(MeasureAudioRaw47+MeasureAudioRaw48+MeasureAudioRaw49)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed49]
Measure=Calc
Formula=(MeasureAudioRaw48+MeasureAudioRaw49+MeasureAudioRaw50)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed49 Formula "(MeasureAudioRaw48+MeasureAudioRaw49+MeasureAudioRaw50)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed50]
Measure=Calc
Formula=(MeasureAudioRaw49+MeasureAudioRaw50+MeasureAudioRaw51)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed50 Formula "(MeasureAudioRaw49+MeasureAudioRaw50+MeasureAudioRaw51)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed51]
Measure=Calc
Formula=(MeasureAudioRaw50+MeasureAudioRaw51+MeasureAudioRaw52)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed51 Formula "(MeasureAudioRaw50+MeasureAudioRaw51+MeasureAudioRaw52)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed52]
Measure=Calc
Formula=(MeasureAudioRaw51+MeasureAudioRaw52+MeasureAudioRaw53)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed52 Formula "(MeasureAudioRaw51+MeasureAudioRaw52+MeasureAudioRaw53)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed53]
Measure=Calc
Formula=(MeasureAudioRaw52+MeasureAudioRaw53+MeasureAudioRaw54)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed53 Formula "(MeasureAudioRaw52+MeasureAudioRaw53+MeasureAudioRaw54)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed54]
Measure=Calc
Formula=(MeasureAudioRaw53+MeasureAudioRaw54+MeasureAudioRaw55)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed54 Formula "(MeasureAudioRaw53+MeasureAudioRaw54+MeasureAudioRaw55)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed55]
Measure=Calc
Formula=(MeasureAudioRaw54+MeasureAudioRaw55+MeasureAudioRaw56)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed55 Formula "(MeasureAudioRaw54+MeasureAudioRaw55+MeasureAudioRaw56)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed56]
Measure=Calc
Formula=(MeasureAudioRaw55+MeasureAudioRaw56+MeasureAudioRaw57)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed56 Formula "(MeasureAudioRaw55+MeasureAudioRaw56+MeasureAudioRaw57)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed57]
Measure=Calc
Formula=(MeasureAudioRaw56+MeasureAudioRaw57+MeasureAudioRaw58)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed57 Formula "(MeasureAudioRaw56+MeasureAudioRaw57+MeasureAudioRaw58)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed58]
Measure=Calc
Formula=(MeasureAudioRaw57+MeasureAudioRaw58+MeasureAudioRaw59)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed58 Formula "(MeasureAudioRaw57+MeasureAudioRaw58+MeasureAudioRaw59)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed59]
Measure=Calc
Formula=(MeasureAudioRaw58+MeasureAudioRaw59+MeasureAudioRaw60)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed59 Formula "(MeasureAudioRaw58+MeasureAudioRaw59+MeasureAudioRaw60)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed60]
Measure=Calc
Formula=(MeasureAudioRaw59+MeasureAudioRaw60+MeasureAudioRaw61)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed60 Formula "(MeasureAudioRaw59+MeasureAudioRaw60+MeasureAudioRaw61)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed61]
Measure=Calc
Formula=(MeasureAudioRaw60+MeasureAudioRaw61+MeasureAudioRaw62)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed61 Formula "(MeasureAudioRaw60+MeasureAudioRaw61+MeasureAudioRaw62)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed62]
Measure=Calc
Formula=(MeasureAudioRaw61+MeasureAudioRaw62+MeasureAudioRaw63)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed62 Formula "(MeasureAudioRaw61+MeasureAudioRaw62+MeasureAudioRaw63)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed63]
Measure=Calc
Formula=(MeasureAudioRaw62+MeasureAudioRaw63+MeasureAudioRaw64)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed63 Formula "(MeasureAudioRaw62+MeasureAudioRaw63+MeasureAudioRaw64)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed64]
Measure=Calc
Formula=(MeasureAudioRaw63+MeasureAudioRaw64+MeasureAudioRaw65)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed64 Formula "(MeasureAudioRaw63+MeasureAudioRaw64+MeasureAudioRaw65)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed65]
Measure=Calc
Formula=(MeasureAudioRaw64+MeasureAudioRaw65+MeasureAudioRaw66)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed65 Formula "(MeasureAudioRaw64+MeasureAudioRaw65+MeasureAudioRaw66)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed66]
Measure=Calc
Formula=(MeasureAudioRaw65+MeasureAudioRaw66+MeasureAudioRaw67)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed66 Formula "(MeasureAudioRaw65+MeasureAudioRaw66+MeasureAudioRaw67)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed67]
Measure=Calc
Formula=(MeasureAudioRaw66+MeasureAudioRaw67+MeasureAudioRaw68)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed67 Formula "(MeasureAudioRaw66+MeasureAudioRaw67+MeasureAudioRaw68)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed68]
Measure=Calc
Formula=(MeasureAudioRaw67+MeasureAudioRaw68+MeasureAudioRaw69)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed68 Formula "(MeasureAudioRaw67+MeasureAudioRaw68+MeasureAudioRaw69)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed69]
Measure=Calc
Formula=(MeasureAudioRaw68+MeasureAudioRaw69+MeasureAudioRaw70)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed69 Formula "(MeasureAudioRaw68+MeasureAudioRaw69+MeasureAudioRaw70)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed70]
Measure=Calc
Formula=(MeasureAudioRaw69+MeasureAudioRaw70+MeasureAudioRaw71)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed70 Formula "(MeasureAudioRaw69+MeasureAudioRaw70+MeasureAudioRaw71)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed71]
Measure=Calc
Formula=(MeasureAudioRaw70+MeasureAudioRaw71+MeasureAudioRaw72)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed71 Formula "(MeasureAudioRaw70+MeasureAudioRaw71+MeasureAudioRaw72)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed72]
Measure=Calc
Formula=(MeasureAudioRaw71+MeasureAudioRaw72+MeasureAudioRaw73)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed72 Formula "(MeasureAudioRaw71+MeasureAudioRaw72+MeasureAudioRaw73)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed73]
Measure=Calc
Formula=(MeasureAudioRaw72+MeasureAudioRaw73+MeasureAudioRaw74)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed73 Formula "(MeasureAudioRaw72+MeasureAudioRaw73+MeasureAudioRaw74)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed74]
Measure=Calc
Formula=(MeasureAudioRaw73+MeasureAudioRaw74+MeasureAudioRaw75)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed74 Formula "(MeasureAudioRaw73+MeasureAudioRaw74+MeasureAudioRaw75)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed75]
Measure=Calc
Formula=(MeasureAudioRaw74+MeasureAudioRaw75+MeasureAudioRaw76)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed75 Formula "(MeasureAudioRaw74+MeasureAudioRaw75+MeasureAudioRaw76)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed76]
Measure=Calc
Formula=(MeasureAudioRaw75+MeasureAudioRaw76+MeasureAudioRaw77)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed76 Formula "(MeasureAudioRaw75+MeasureAudioRaw76+MeasureAudioRaw77)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed77]
Measure=Calc
Formula=(MeasureAudioRaw76+MeasureAudioRaw77+MeasureAudioRaw78)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed77 Formula "(MeasureAudioRaw76+MeasureAudioRaw77+MeasureAudioRaw78)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed78]
Measure=Calc
Formula=(MeasureAudioRaw77+MeasureAudioRaw78+MeasureAudioRaw79)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed78 Formula "(MeasureAudioRaw77+MeasureAudioRaw78+MeasureAudioRaw79)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed79]
Measure=Calc
Formula=(MeasureAudioRaw78+MeasureAudioRaw79+MeasureAudioRaw80)/1.8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed79 Formula "(MeasureAudioRaw78+MeasureAudioRaw79+MeasureAudioRaw80)/1.8+#MinBarValue#"]
[MeasureAudioSmoothed80]
Measure=Calc
Formula=(MeasureAudioRaw79+MeasureAudioRaw80+MeasureAudioRaw81)/2+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed80 Formula "(MeasureAudioRaw79+MeasureAudioRaw80+MeasureAudioRaw81)/2+#MinBarValue#"]
[MeasureAudioSmoothed81]
Measure=Calc
Formula=(MeasureAudioRaw80+MeasureAudioRaw81+MeasureAudioRaw82)/2.5+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed81 Formula "(MeasureAudioRaw80+MeasureAudioRaw81+MeasureAudioRaw82)/2.5+#MinBarValue#"]
[MeasureAudioSmoothed82]
Measure=Calc
Formula=(MeasureAudioRaw81+MeasureAudioRaw82+MeasureAudioRaw83)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed82 Formula "(MeasureAudioRaw81+MeasureAudioRaw82+MeasureAudioRaw83)/3+#MinBarValue#"]
[MeasureAudioSmoothed83]
Measure=Calc
Formula=(MeasureAudioRaw82+MeasureAudioRaw83+MeasureAudioRaw84)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed83 Formula "(MeasureAudioRaw82+MeasureAudioRaw83+MeasureAudioRaw84)/3+#MinBarValue#"]
[MeasureAudioSmoothed84]
Measure=Calc
Formula=(MeasureAudioRaw83+MeasureAudioRaw84+MeasureAudioRaw85)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed84 Formula "(MeasureAudioRaw83+MeasureAudioRaw84+MeasureAudioRaw85)/3+#MinBarValue#"]
[MeasureAudioSmoothed85]
Measure=Calc
Formula=(MeasureAudioRaw84+MeasureAudioRaw85+MeasureAudioRaw86)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed85 Formula "(MeasureAudioRaw84+MeasureAudioRaw85+MeasureAudioRaw86)/3+#MinBarValue#"]
[MeasureAudioSmoothed86]
Measure=Calc
Formula=(MeasureAudioRaw85+MeasureAudioRaw86+MeasureAudioRaw87)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed86 Formula "(MeasureAudioRaw85+MeasureAudioRaw86+MeasureAudioRaw87)/3+#MinBarValue#"]
[MeasureAudioSmoothed87]
Measure=Calc
Formula=(MeasureAudioRaw86+MeasureAudioRaw87+MeasureAudioRaw88)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed87 Formula "(MeasureAudioRaw86+MeasureAudioRaw87+MeasureAudioRaw88)/3+#MinBarValue#"]
[MeasureAudioSmoothed88]
Measure=Calc
Formula=(MeasureAudioRaw87+MeasureAudioRaw88+MeasureAudioRaw89)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed88 Formula "(MeasureAudioRaw87+MeasureAudioRaw88+MeasureAudioRaw89)/3+#MinBarValue#"]
[MeasureAudioSmoothed89]
Measure=Calc
Formula=(MeasureAudioRaw88+MeasureAudioRaw89+MeasureAudioRaw90)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed89 Formula "(MeasureAudioRaw88+MeasureAudioRaw89+MeasureAudioRaw90)/3+#MinBarValue#"]
[MeasureAudioSmoothed90]
Measure=Calc
Formula=(MeasureAudioRaw89+MeasureAudioRaw90+MeasureAudioRaw91)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed90 Formula "(MeasureAudioRaw89+MeasureAudioRaw90+MeasureAudioRaw91)/3+#MinBarValue#"]
[MeasureAudioSmoothed91]
Measure=Calc
Formula=(MeasureAudioRaw90+MeasureAudioRaw91+MeasureAudioRaw92)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed91 Formula "(MeasureAudioRaw90+MeasureAudioRaw91+MeasureAudioRaw92)/3+#MinBarValue#"]
[MeasureAudioSmoothed92]
Measure=Calc
Formula=(MeasureAudioRaw91+MeasureAudioRaw92+MeasureAudioRaw93)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed92 Formula "(MeasureAudioRaw91+MeasureAudioRaw92+MeasureAudioRaw93)/3+#MinBarValue#"]
[MeasureAudioSmoothed93]
Measure=Calc
Formula=(MeasureAudioRaw92+MeasureAudioRaw93+MeasureAudioRaw94)/3+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed93 Formula "(MeasureAudioRaw92+MeasureAudioRaw93+MeasureAudioRaw94)/3+#MinBarValue#"]
[MeasureAudioSmoothed94]
Measure=Calc
Formula=(MeasureAudioRaw93+MeasureAudioRaw94+MeasureAudioRaw95)/4+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed94 Formula "(MeasureAudioRaw93+MeasureAudioRaw94+MeasureAudioRaw95)/4+#MinBarValue#"]
[MeasureAudioSmoothed95]
Measure=Calc
Formula=(MeasureAudioRaw94+MeasureAudioRaw95+MeasureAudioRaw96)/5+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed95 Formula "(MeasureAudioRaw94+MeasureAudioRaw95+MeasureAudioRaw96)/5+#MinBarValue#"]
[MeasureAudioSmoothed96]
Measure=Calc
Formula=(MeasureAudioRaw95+MeasureAudioRaw96+MeasureAudioRaw97)/6+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed96 Formula "(MeasureAudioRaw95+MeasureAudioRaw96+MeasureAudioRaw97)/6+#MinBarValue#"]
[MeasureAudioSmoothed97]
Measure=Calc
Formula=(MeasureAudioRaw96+MeasureAudioRaw97+MeasureAudioRaw98)/7+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed97 Formula "(MeasureAudioRaw96+MeasureAudioRaw97+MeasureAudioRaw98)/7+#MinBarValue#"]
[MeasureAudioSmoothed98]
Measure=Calc
Formula=(MeasureAudioRaw97+MeasureAudioRaw98+MeasureAudioRaw99)/8+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed98 Formula "(MeasureAudioRaw97+MeasureAudioRaw98+MeasureAudioRaw99)/8+#MinBarValue#"]
[MeasureAudioSmoothed99]
Measure=Calc
Formula=(MeasureAudioRaw98+MeasureAudioRaw99+MeasureAudioRaw100)/9+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed99 Formula "(MeasureAudioRaw98+MeasureAudioRaw99+MeasureAudioRaw100)/9+#MinBarValue#"]
[MeasureAudioSmoothed100]
Measure=Calc
Formula=(MeasureAudioRaw99+MeasureAudioRaw100+MeasureAudioRaw100)/10+#MinBarValue#
AverageSize=#AverageSize#
IfCondition=(#DisableAutoMute# = 0) && (MeasureState <> 1)
IfTrueAction=[!DisableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed100 Formula "#MinBarValue#"]
IfFalseAction=[!EnableMeasureGroup RawAudioMeasures][!SetOption MeasureAudioSmoothed100 Formula "(MeasureAudioRaw99+MeasureAudioRaw100+MeasureAudioRaw100)/10+#MinBarValue#"]
