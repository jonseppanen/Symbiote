;========================================================================
;                      Global variables file
;========================================================================
;   All global variables here. They get imported into everything.


[Variables]
var.MediaApp=Spotify
var.MediaPlayerColor=30,215,96,255

var.BlockWidth=48
var.BlockHeight=40
var.BorderWidth=12
var.BorderRadius=0
var.NotifierHeight=1
var.StrokeWidth=1.5

var.ColorTransparent=0,0,0,1
var.ColorBackground=5,7,15,255
var.ColorMain=255,255,255,255
var.ColorNeutralDark=20,25,30,255
var.ColorNeutralLight=170,175,185,255
var.ColorHover=255,100,50,255
var.ColorAccentDark=200,50,0,255
var.ColorAccentLight=255,100,50,255

var.FontColor=#var.ColorMain#
var.FontColorSubtle=#var.ColorAccentDark#
var.FontColorHilight=#var.ColorAccentLight#
var.FontColorGrey=#var.ColorNeutralLight#

var.FontFace=Metropolis
var.FontSizeSmall=12
var.FontSizeMedium=18
var.FontSizeLarge=24
var.FontSizeHuge=30

var.PaddingHText=24
var.PaddingHTextSmall=(#var.PaddingHText# )
var.PaddingHTextMedium=(#var.PaddingHText# - (#var.FontSizeMedium# / 6))
var.PaddingHTextLarge=(#var.PaddingHText# - (#var.FontSizeLarge# / 6))
var.PaddingHTextHuge=(#var.PaddingHText# - (#var.FontSizeHuge# / 6))

var.PaddingVText=20

var.Shape.Base=Rectangle 0,0,#var.BlockWidth#,#var.BlockHeight# | Fill Color 0,0,0,1 | StrokeWidth 0
