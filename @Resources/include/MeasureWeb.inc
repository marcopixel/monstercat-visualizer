[MeasureState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
UpdateDivider=10

[MeasureStateButton]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE
Substitute="0":"Play","1":"Pause","2":"Play","3":"Replay"

[MeasureTrack]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=COVER
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverWeb.png
Substitute="":"#@#images\nocover.png"
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=DURATION
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress

[MeasureAutoHideWebNowPlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE
IfBelowValue=1
IfBelowAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfEqualValue=1
IfEqualAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=1
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#
UpdateDivider=100
