
;This will get if there is any supported website open and connected
[MeasureStatus]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Status

;Example of how to get the title of the current song, if GPMDP has no song selected or it is closed it will be a blank string.
[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
UpdateDivider = 5
Substitute="":"N/A"

;Example of how to get the artist of the current song, if GPMDP has no song selected or it is closed it will be a blank string.
[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
UpdateDivider = 5
Substitute="":"N/A"

;Example of how to get the album of the current song, if GPMDP has no song selected or it is closed it will be a blank string.
[MeasureAlbum]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album
UpdateDivider = 5
Substitute="":"N/A"

;Example of how to get the album art of the current song, if GPMDP has no song selected or it is closed it will be a blank string.
;Note: You should not put and onChange event on this measure as it will change twice for each song instead use CoverWebAddress
[MeasureAlbumArt]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
;This will be displayed when the album art is downloading, in this example I have downloaded from GPM the placeholder image but it could be any image
DefaultPath=#@#Images\nocover.png
;This is where the album art will be downloaded to, note if the album does not have album art set it will still download the GPM placeholder album art to here
CoverPath=#@#Images\cover.png
UpdateDivider = 5

;The URL of the currently displayed image
;Note this is updated once a PlayerType=Cover has updated so it is safe to assume that the image has been updated
;Note I am pretty sure if you have more than one PlayerType=Cover it will update when the first one is done, in the future I will try to have this accept a cover plugin and update once that cover plugin is done.
[MeasureAlbumArtAddress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=CoverWebAddress
UpdateDivider = 5

;This gets how far into the song you are formated in MM:SS
[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
UpdateDivider = 5
Substitute="":"N/A"

;This gets how long the song is formated in MM:SS
[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
UpdateDivider = 5
Substitute="":"N/A"

;This is what percent of the way through the song you are
[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
Substitute="":"N/A"

;This is what percent of the way through the song you are
[MeasureVolume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Volume
Substitute="":"N/A"

;The play state of the player
;0 is no song is selected, this will almost never happen as the plugin retains the last known song in the future I may change it so it clears when the websocket closes but I dont think I want to do that in the event the websocket closes unexpectedly you may want it to keep old data
;1 is playing
;2 is paused
[MeasurePlayPause]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play","3":"Replay"

;The repeat state of the player
;0 repeat is off
;1 repeat is on repeat only one song
;2 repeat all songs
[MeasureRepeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat
;An example of how to change and color the icon based on the repeat state
IfCondition=MeasureRepeat = 0
IfTrueAction=[!SetOption MeterRepeat ImageTint "#Color#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeat.png"]
IfCondition2=MeasureRepeat = 2
IfTrueAction2=[!SetOption MeterRepeat ImageTint "#Highlight#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeatOne.png"]
IfCondition3=MeasureRepeat = 1
IfTrueAction3=[!SetOption MeterRepeat ImageTint "#Highlight#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeat.png"]

;The shuffle state of the player
;0 shuffle is off
;1 shuffle is on
[MeasureShuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Shuffle
;An example of how to color the shuffle icon based on the shuffle state
IfCondition=MeasureShuffle = 0
IfTrueAction=[!SetOption MeterShuffle ImageTint "#Color#"]
IfCondition2=MeasureShuffle = 1
IfTrueAction2=[!SetOption MeterShuffle ImageTint "#Highlight#"]

;The rating of the current song
;-1 is thumbs down
;0 is no rating
;1 is thumbs up
[MeasureRating]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Rating
;An example of how to color two rating icons based on the rating
IfCondition=(MeasureRating < 3) && (MeasureRating > 0)
IfTrueAction=[!SetOption MeterThumbsUp ImageTint "#Color#"][!SetOption MeterThumbsDown ImageTint "#Highlight#"]
IfCondition2=MeasureRating > 3
IfTrueAction2=[!SetOption MeterThumbsUp ImageTint "#Highlight#"][!SetOption MeterThumbsDown ImageTint "#Color#"]
IfCondition3=(MeasureRating = 0) || (MeasureRating = 3)
IfTrueAction3=[!SetOption MeterThumbsUp ImageTint "#Color#"][!SetOption MeterThumbsDown ImageTint "#Color#"]