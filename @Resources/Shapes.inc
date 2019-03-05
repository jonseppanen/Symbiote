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
Shape2=Line 22,13,13,20 | Extend HoverSubColorState | StrokeWidth 1.5
Shape3=Line 13,20,22,27 | Extend HoverSubColorState | StrokeWidth 1.5
Shape4=Line 33,12,23,20 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 23,20,33,28 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth 2
HoverColorState=Stroke Color #var.ColorMain# | StrokeStartCap Round | StrokeEndCap Round
HoverSubColorState=Stroke Color #var.ColorNeutralLight# | StrokeStartCap Round | StrokeEndCap Round

[shapePlay]
Shape=#var.Shape.Base#
Shape2=Line 21,14,21,26 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 21,14,30,20 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 21,26,30,20 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth 2 | StrokeStartCap Round | StrokeEndCap Round
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeSpotify]
Shape=#var.Shape.Base#
Shape2=Curve 17,16,32,18,24,13 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape3=Curve 17,20,31,22,23,18 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
Shape4=Curve 18,24,29,26,24,23 | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor#
GlobalStrokeWidth=StrokeWidth 2 | StrokeStartCap Round | StrokeEndCap Round

[shapePause]
Shape=#var.Shape.Base#
Shape2=Line 21,13,21,27 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 27,13,27,27 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth 2 | StrokeStartCap Round | StrokeEndCap Round
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain# 

[shapeNextArrow]
Shape=#var.Shape.Base#
Shape2=Line 15,12,25,20 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 25,20,15,28 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 26,13,35,20 | Extend HoverSubColorState | StrokeWidth 1.5
Shape5=Line 35,20,26,27 | Extend HoverSubColorState | StrokeWidth 1.5
GlobalStrokeWidth=StrokeWidth 2
HoverColorState=Stroke Color #var.ColorMain# | StrokeStartCap Round | StrokeEndCap Round
HoverSubColorState=Stroke Color #var.ColorNeutralLight# | StrokeStartCap Round | StrokeEndCap Round

[shapeVolume]
Shape=#var.Shape.Base#
Shape2=Rectangle 13,16,1,10 | StrokeWidth 0 | Extend HoverColorState
Shape3=Rectangle 14,16,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape4=Rectangle 14,25,4,1 | StrokeWidth 0 | Extend HoverColorState
Shape5=Rectangle 25,10,1,21 | StrokeWidth 0 | Extend HoverColorState
Shape6=Line 18,16,25,11 | Extend HoverColorState, GlobalStrokeWidth
Shape7=Line 18,26,25,30 | Extend HoverColorState, GlobalStrokeWidth
Shape8=Rectangle 28,14,(([MeasureSysVolumePerc] * [MeasureBand0]) * 20),1.4 | StrokeWidth 0 | Fill Color #var.ColorNeutralLight# | Rotate -20,0,0
Shape9=Rectangle 28,17,(([MeasureSysVolumePerc] * [MeasureBand1]) * 20),1.4 | StrokeWidth 0 | Fill Color#var.ColorNeutralLight# | Rotate -10,0,0
Shape10=Rectangle 28,20,(([MeasureSysVolumePerc] * [MeasureBand2]) * 20),1| StrokeWidth 0 | Fill Color #var.ColorNeutralLight# | Rotate 0,0,0
Shape11=Rectangle 28,23,(([MeasureSysVolumePerc] * [MeasureBand3]) * 20),1.4 | StrokeWidth 0 | Fill Color #var.ColorNeutralLight# | Rotate 10,0,0
Shape12=Rectangle 28,26,(([MeasureSysVolumePerc] * [MeasureBand4]) * 20),1.4 | StrokeWidth 0 | Fill Color #var.ColorNeutralLight# | Rotate 20,0,0
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#
HoverColorState2=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#
;Vupath=25,10 | LineTo (25 + (5 * [MeasureBand0])),12 | LineTo (25 + (5 * [MeasureBand1])),16 | LineTo (25 + (5 * [MeasureBand2])),20 | LineTo (25 + (5 * [MeasureBand3])),24 | LineTo (25 + (5 * [MeasureBand4])),26 | LineTo 25,30 | ClosePath 0
;Shape8=Rectangle 30,20,1,([MeasureSysVolumeBar1] + 1) | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar1] / 2)) | Extend HoverColorState
;Shape9=Rectangle 33,20,1,([MeasureSysVolumeBar2] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar2] / 2)) | Extend HoverColorState
;Shape10=Rectangle 36,20,1,([MeasureSysVolumeBar3] + 1)  | StrokeWidth 0 | Offset 0,(-([MeasureSysVolumeBar3] / 2)) | Extend HoverColorState

;Vupath=25,10 | (3 * (1 - [MeasureBand0])),12 | (3 * (1 - [MeasureBand1])),16 | (3 * (1 - [MeasureBand02])),20 | | LineTo 25,30 | ClosePath 0

[shapeEthernet1]
Shape=#var.Shape.Base#
Shape2=Line 19,13,11,21 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 11,21,19,28 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 30,13,38,21 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 38,21,30,28 | Extend HoverColorState, GlobalStrokeWidth
Shape6=Ellipse 18,21,1.5 | Extend HoverColorState | StrokeWidth 0 
Shape7=Ellipse 24,21,1.5 | Extend HoverColorState | StrokeWidth 0 
Shape8=Ellipse 31,21,1.5 | Extend HoverColorState | StrokeWidth 0
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeEthernet0]
Shape=#var.Shape.Base#
Shape2=Line 19,13,11,21 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Line 11,21,19,28 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 30,13,38,21 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Line 38,21,30,28 | Extend HoverColorState, GlobalStrokeWidth
Shape6=Line 21,17,28,24 | Extend HoverColorState, GlobalStrokeWidth
Shape7=Line 28,17,21,24 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeWifi0]
Shape=#var.Shape.Base#
Shape2=Ellipse 24.5,28,1.5 | Fill Color 0,0,0,0 | Extend HoverColorState, GlobalStrokeWidth
Shape3=Curve 20,23,29,23,24,19 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Curve 16,19,33,19,24,13 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Curve 12,15,37,15,24,8 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeWifi1]
Shape=#var.Shape.Base#
Shape2=Ellipse 24.5,28,1.5 | Extend HoverColorState | StrokeWidth 0
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeWifi2]
Shape=#var.Shape.Base#
Shape2=Ellipse 24.5,28,1.5 | Extend HoverColorState | StrokeWidth 0
Shape3=Curve 20,23,29,23,24,19 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeWifi3]
Shape=#var.Shape.Base#
Shape2=Ellipse 24.5,28,1.5 | Extend HoverColorState | StrokeWidth 0
Shape3=Curve 20,23,29,23,24,19 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Curve 16,19,33,19,24,13 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeWifi4]
Shape=#var.Shape.Base#
Shape2=Ellipse 24.5,28,1.5 | Extend HoverColorState | StrokeWidth 0
Shape3=Curve 20,23,29,23,24,19 | Extend HoverColorState, GlobalStrokeWidth
Shape4=Curve 16,19,33,19,24,13 | Extend HoverColorState, GlobalStrokeWidth
Shape5=Curve 12,15,37,15,24,8 | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#