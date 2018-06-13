[MeasureState]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=State
UpdateDivider=2

[MeasureStateButton]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play"
UpdateDivider=2

[MeasureTrack]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Title
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Artist
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Cover
Substitute="":"#@#images\nocover.png"
UpdateDivider=100

[MeasurePosition]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Position
UpdateDivider=20

[MeasureDuration]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Duration
UpdateDivider=20

[MeasureProgress]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Progress
UpdateDivider=20

[MeasureAutoHideNowPlaying]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=Status
IfEqualValue=0
IfEqualAction=[!HideFadeGroup "Spectrum"][!HideFadeGroup "SongInfo"][!Log "AutoHide: Media player was closed, hiding skin"]
IfAboveValue=0
IfAboveAction=[!ShowFadeGroup "Spectrum"][!ShowFadeGroup "SongInfo"][!Log "AutoHide: Media player was opened, showing skin"]
Disabled=(#EnableAutoHide# > 0 ? 0 : 1)
UpdateDivider=100