;========================================================================
;                 Shape Sheet for blocks and widgets
;========================================================================
;   Declare your shapes here for reuse everywhere. Try to use vars for 
;   any colors so they can be changed.


[shapePrevArrow]
Shape=#var.Shape.Base#
Shape2=Line 24,16,14,24 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape3=Line 14,24,24,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape4=Line 32,16,22,24 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape5=Line 22,24,32,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5

[shapePlay]
Shape=#var.Shape.Base#
Shape2=Line 20,16,20,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape3=Line 20,16,30,24 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape4=Line 30,24,20,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5

[shapeSpotify]
Shape=#var.Shape.Base#
Shape2=Ellipse 24,24,11 | Fill Color 0,0,0,0 | StrokeWidth 1.5 | Stroke Color #var.MediaPlayerColor#
Shape3=Curve 17,21,32,23,24,18 | StrokeWidth 1.5 | Stroke Color  #var.MediaPlayerColor#
Shape4=Curve 17,24,31,26,23,22 | StrokeWidth 1.5 | Stroke Color  #var.MediaPlayerColor#
Shape5=Curve 18,27,29,29,24,26 | StrokeWidth 1.5 | Stroke Color  #var.MediaPlayerColor#

[shapePause]
Shape=#var.Shape.Base#
Shape2=Line 20,16,20,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape3=Line 28,16,28,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5

[shapeNextArrow]
Shape=#var.Shape.Base#
Shape2=Line 16,16,26,24 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape3=Line 26,24,16,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape4=Line 24,16,34,24 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape5=Line 34,24,24,32 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5

[shapeVolume]
Shape=#var.Shape.Base#
Shape2=Rectangle 13,20,1,9 | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0
Shape3=Rectangle 14,20,4,1 | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0
Shape4=Rectangle 14,28,4,1 | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0
Shape5=Rectangle 25,14,1,20 | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0
Shape6=Line 18,20,25,15 | Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape7=Line 18,29,25,34| Stroke Color #var.SkinElementColor#,255 | StrokeWidth 1.5
Shape8=Rectangle 30,24,1,([MeasureSysVolumeBar1] + 1) | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar1] / 2))
Shape9=Rectangle 33,24,1,([MeasureSysVolumeBar2] + 1)  | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar2] / 2))
Shape10=Rectangle 36,24,1,([MeasureSysVolumeBar3] + 1)  | Fill Color #var.SkinElementColor#,255 | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar3] / 2))
