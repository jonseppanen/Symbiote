;========================================================================
;                 Shape Sheet for blocks and widgets
;========================================================================
;   Declare your shapes here for reuse everywhere. Try to use vars for 
;   any colors so they can be changed.


[shapePrevArrow]
Shape=#var.Shape.Base#
Shape2=Line 24,16,14,24 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 14,24,24,32 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 32,16,22,24 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 22,24,32,32 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain#

[shapePlay]
Shape=#var.Shape.Base#
Shape2=Line 20,16,20,32 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 20,16,30,24 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 30,24,20,32 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain#

[shapeSpotify]
Shape=#var.Shape.Base#
Shape2=Ellipse 24,24,11 | Fill Color 0,0,0,0 | Extend GlobalStrokeWidth | Stroke Color #var.MediaPlayerColor#
Shape3=Curve 17,21,32,23,24,18 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape4=Curve 17,24,31,26,23,22 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape5=Curve 18,27,29,29,24,26 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#

[shapePause]
Shape=#var.Shape.Base#
Shape2=Line 20,16,20,32 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 28,16,28,32 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain#

[shapeNextArrow]
Shape=#var.Shape.Base#
Shape2=Line 16,16,26,24 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 26,24,16,32 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 24,16,34,24 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 34,24,24,32 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain#

[shapeVolume]
Shape=#var.Shape.Base#
Shape2=Rectangle 13,20,1,9 | StrokeWidth 0 | Extend HoverColorState
Shape3=Rectangle 14,20,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape4=Rectangle 14,28,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape5=Rectangle 25,14,1,20 | StrokeWidth 0 | Extend HoverColorState
Shape6=Line 18,20,25,15 | Extend HoverColorState, GlobalStrokeWidth
Shape7=Line 18,29,25,34 | Extend HoverColorState, GlobalStrokeWidth
Shape8=Rectangle 30,24,1,([MeasureSysVolumeBar1] + 1) | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar1] / 2)) | Extend HoverColorState
Shape9=Rectangle 33,24,1,([MeasureSysVolumeBar2] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar2] / 2)) | Extend HoverColorState
Shape10=Rectangle 36,24,1,([MeasureSysVolumeBar3] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar3] / 2)) | Extend HoverColorState
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#
