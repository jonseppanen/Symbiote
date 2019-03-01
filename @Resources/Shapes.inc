;========================================================================
;                 Shape Sheet for blocks and widgets
;========================================================================
;   Declare your shapes here for reuse everywhere. Try to use vars for 
;   any colors so they can be changed.

[shapeSpacer]
Shape=Rectangle 0,0,(#var.BlockWidth# / 4),#var.BlockHeight# | Fill Color 0,0,0,1 | StrokeWidth 0
DynamicVariables=1
X=R

[shapePrevArrow]
Shape=#var.Shape.Base#
Shape2=Line 24,12,14,20  | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 14,20,24,28 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 32,12,22,20  | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 22,20,32,28 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain#

[shapePlay]
Shape=#var.Shape.Base#
Shape2=Rectangle 20,11,1,18 | StrokeWidth 0 | Extend HoverColorState
Shape3=Line 21,12,31,20 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 31,20,21,28 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeSpotify]
Shape=#var.Shape.Base#
Shape2=Ellipse 24,20,11 | Fill Color 0,0,0,0 | Extend GlobalStrokeWidth | Stroke Color #var.MediaPlayerColor#
Shape3=Curve 17,17,32,19,24,14 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape4=Curve 17,20,31,22,23,18 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape5=Curve 18,23,29,25,24,22 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#

[shapePause]
Shape=#var.Shape.Base#
Shape2=Rectangle 22,12,1,17 | StrokeWidth 0 | Extend HoverColorState
Shape3=Rectangle 28,12,1,17 | StrokeWidth 0 | Extend HoverColorState
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeNextArrow]
Shape=#var.Shape.Base#
Shape2=Line 16,12,26,20 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 26,20,16,28 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 24,12,34,20 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 34,20,24,28 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeVolume]
Shape=#var.Shape.Base#
Shape2=Rectangle 13,16,1,9 | StrokeWidth 0 | Extend HoverColorState
Shape3=Rectangle 14,16,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape4=Rectangle 14,24,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape5=Rectangle 25,10,1,20 | StrokeWidth 0 | Extend HoverColorState
Shape6=Line 18,16,25,11 | Extend HoverColorState, GlobalStrokeWidth
Shape7=Line 18,25,25,30 | Extend HoverColorState, GlobalStrokeWidth
Shape8=Rectangle 30,20,1,([MeasureSysVolumeBar1] + 1) | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar1] / 2)) | Extend HoverColorState
Shape9=Rectangle 33,20,1,([MeasureSysVolumeBar2] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar2] / 2)) | Extend HoverColorState
Shape10=Rectangle 36,20,1,([MeasureSysVolumeBar3] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar3] / 2)) | Extend HoverColorState
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#
