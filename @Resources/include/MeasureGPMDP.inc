[Variables]
; Includes the variables/styles used for the skin.
@include=#@#variables.ini

[MeasureState]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
IfEqualValue=0
IfEqualAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=0
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#

[MeasureStateButton]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Title
Substitute="":"#NoTrackNameText#"

[MeasureArtist]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Artist
Substitute="":"#NoArtistNameText#"

[MeasureCover]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Cover
DefaultPath=#@#Images\nocover.png
CoverPath=#@#Images\cover.png
Paused=#ShowMonstercatCover#

[MeasurePosition]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Position

[MeasureDuration]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Duration