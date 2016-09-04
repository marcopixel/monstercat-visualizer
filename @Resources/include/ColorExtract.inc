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
UpdateDivider=10
[MeasureSetMediaPlayer]
Measure=String
String=#PlayerName#
IfMatch=Spotify
IfMatchAction=[!SetVariable MPMode "MeasureCoverSpotify"]
IfNotMatchAction=[!SetVariable MPMode "MeasureCoverNowPlaying"]
UpdateDivider=-1
[MeasureCoverColor]
Measure=Plugin
Plugin=ColorExtract
ImagePath=[#MPMode#]
ColorType=Background
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