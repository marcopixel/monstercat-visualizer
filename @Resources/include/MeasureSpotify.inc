[MeasureState]
Measure=Plugin
Plugin=NowPlaying
Playername=Spotify
PlayerType=State
UpdateDivider=10

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
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverSpotify.png
Substitute="":"#@#images\nocover.png"
Paused=#ShowMonstercatCover#
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length
UpdateDivider=10

[MeasureProgressPrecent]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress

[MeasureProgress]
Measure=Calc
Formula=MeasureProgressPrecent*100

[MeasureAutoHideSpotify]
Measure=Plugin
Plugin=Process
ProcessName=Spotify.exe
IfEqualValue=-1
IfEqualAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=-1
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#
UpdateDivider=100
