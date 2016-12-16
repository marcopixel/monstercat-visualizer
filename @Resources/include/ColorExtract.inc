[Variables]
; Includes the variables/styles used for the skin.
@include=#@#variables.ini

[MeasureCoverSpotify]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\cover.png

[MeasureCoverNowPlaying]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=COVER
Substitute="":"#@#images\nocover.png"

[MeasureSetMediaPlayer]
Measure=String
String=#PlayerName#
IfMatch=Spotify
IfMatchAction=[!WriteKeyValue Variables MPMode Spotify "#@#variables.ini"]
IfNotMatchAction=[!WriteKeyValue Variables MPMode NowPlaying "#@#variables.ini"]
UpdateDivider=-1

[MeasureCoverColor]
Measure=Plugin
Plugin=ColorExtract
ImagePath=[MeasureCover#MPMode#]
ColorType=Background
Substitute="":"#Color#","0,0,0,255":"#Color#"
DynamicVariables=1

[StyleStaticBar]
BarColor=#Color#
[StyleStaticMeter]
SolidColor=#Color#
[StyleCoverMeter]
SolidColor=[MeasureCoverColor]
DynamicVariables=1
[StyleCoverBar]
BarColor=[MeasureCoverColor]
DynamicVariables=1