[Variables]
@include=#@#variables.ini

[MeasureGenre]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Genre
UpdateDivider=10
; You can add your own genres here.
; Use | as dividier and replace spaces with \s (otherwise it won't work)
; Electro
IfMatch=Electro
IfMatchAction=[!SetVariable GenreColor "#Electro#"]
; Electronic/EDM
IfMatch2=EDM|Electronic|Breaks|Chillout|Bounce|Chill
IfMatchAction2=[!SetVariable GenreColor "#EDM#"]
; House/Progressive House
IfMatch3=House|Electro\sHouse|Progressive\sHouse
IfMatchAction3=[!SetVariable GenreColor "#House#"]
; Drum & Bass
IfMatch4=Drum\s&\sBass|DnB
IfMatchAction4=[!SetVariable GenreColor "#DnB#"]
; Dubstep
IfMatch5=Dubstep
IfMatchAction5=[!SetVariable GenreColor "#Dubstep#"]
; Drumstep
IfMatch6=Drumstep
IfMatchAction6=[!SetVariable GenreColor "#Drumstep#"]
; Glitch Hop
IfMatch7=Glitch\sHop|GlitchHop
IfMatchAction7=[!SetVariable GenreColor "#GlitchHop#"]
; Trap
IfMatch8=Trap
IfMatchAction8=[!SetVariable GenreColor "#Trap#"]
; Trance
IfMatch9=Trance|Deep\sHouse
IfMatchAction9=[!SetVariable GenreColor "#Trance#"]
; Hard Dance
IfMatch10=Hard\sDance
IfMatchAction10=[!SetVariable GenreColor "#HardDance#"]
; Nu Disco/Indie Dance
IfMatch11=Nu\sDisco|NuDisco|Disco|Indie\sDance|Electro\sSwing
IfMatchAction11=[!SetVariable GenreColor "#NuDisco#"]
; Future Bass
IfMatch12=Future|Future\sBass
IfMatchAction12=[!SetVariable GenreColor "#FutureBass#"]
; Here is an example for an custom genre. Colors need to be rgb(a) values.
IfMatch13=Mashup|Mash\sUp
IfMatchAction13=[!SetVariable GenreColor "192,255,99"]

; Styles
[StyleStaticBar]
BarColor=#Color#
[StyleStaticMeter]
SolidColor=#Color#
[StyleGenreMeter]
SolidColor=#GenreColor#
DynamicVariables=1
[StyleGenreBar]
BarColor=#GenreColor#
DynamicVariables=1