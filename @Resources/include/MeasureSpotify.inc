[Variables]
; Includes the variables/styles used for the skin.
@include=#@#variables.ini

[MeasureState]
Measure=Plugin
Plugin=NowPlaying
Playername=Spotify
PlayerType=State

[MeasureStateButton]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName
Substitute="":"#NoTrackNameText#"

[MeasureArtist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"#NoArtistNameText#"

[MeasureCover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverSpotify.png
Substitute="":"#@#images\nocover.png"
Paused=#ShowMonstercatCover#

[MeasurePosition]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Position

[MeasureDuration]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length

[MeasureProgress]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
AverageSize=20

[MeasureAutoHideSpotify]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=State
IfEqualValue=0
IfEqualAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=0
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#