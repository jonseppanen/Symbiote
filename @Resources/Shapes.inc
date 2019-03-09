;========================================================================
;                 Shape Sheet for blocks and widgets
;========================================================================
;   Declare your shapes here for reuse everywhere. Try to use vars for 
;   any colors so they can be changed.

[shapeSpacer]
Shape=Rectangle 0,0,(#var.BlockWidth#),#var.BlockHeight# | Fill Color 0,0,0,1 | StrokeWidth 0
Shape2=Ellipse (#var.BlockWidth# / 2),20,4 | Fill Color #var.ColorNeutralDark# | StrokeWidth 0
DynamicVariables=1
X=R

[shapePrevArrow]
Shape=#var.Shape.Base# 
Shape2=Line 24,(10 + #var.ShapePaddingTop#),14,(20 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape3=Line 14,(20 + #var.ShapePaddingTop#),24,(30 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape4=Line 34,(10 + #var.ShapePaddingTop#),24,(20 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape5=Line 24,(20 + #var.ShapePaddingTop#),34,(30 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
HoverColorState=Stroke Color #var.ColorMain# 
;HoverSubColorState=Stroke Color #var.ColorNeutralLight# | StrokeStartCap Round | StrokeEndCap Round
[shapeNextArrow]
Shape=#var.Shape.Base# 
Shape2=Line 14,(10 + #var.ShapePaddingTop#),24,(20 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape3=Line 24,(20 + #var.ShapePaddingTop#),14,(30 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape4=Line 24,(10 + #var.ShapePaddingTop#),34,(20 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
Shape5=Line 34,(20 + #var.ShapePaddingTop#),24,(30 + #var.ShapePaddingTop#) | #var.ShapeStrokeSettings# | Extend HoverColorState
HoverColorState=Stroke Color #var.ColorMain# 
;HoverSubColorState=Stroke Color #var.ColorNeutralLight# | StrokeStartCap Round | StrokeEndCap Round

[shapePlay]
Shape=#var.Shape.Base#
Shape2=Rectangle 21,(13 + #var.ShapePaddingTop#),1,14 | Extend HoverColorState | Strokewidth 0
Shape3=Line 22,(14 + #var.ShapePaddingTop#),30,(20 + #var.ShapePaddingTop#) | Extend HoverColorState, GlobalStrokeWidth
Shape4=Line 22,(26 + #var.ShapePaddingTop#),30,(20 + #var.ShapePaddingTop#) | Extend HoverColorState, GlobalStrokeWidth
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#  | StrokeStartCap Round | StrokeEndCap Round
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#

[shapeSpotify]
Shape=#var.Shape.Base#
Shape2=Curve 17,(16 + #var.ShapePaddingTop#),32,(18 + #var.ShapePaddingTop#),24,(13 + #var.ShapePaddingTop#) | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor# | Scale 0.6
Shape3=Curve 17,(20 + #var.ShapePaddingTop#),31,(22 + #var.ShapePaddingTop#),23,(18 + #var.ShapePaddingTop#) | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor# | Scale 0.6
Shape4=Curve 18,(24 + #var.ShapePaddingTop#),29,(26 + #var.ShapePaddingTop#),24,(23 + #var.ShapePaddingTop#) | Extend GlobalStrokeWidth | Stroke Color  #var.MediaPlayerColor# | Scale 0.6
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth# 

[shapePause]
Shape=#var.Shape.Base#
Shape2=Rectangle 21,(13 + #var.ShapePaddingTop#),1,14 | Extend HoverColorState | Strokewidth 0
Shape3=Rectangle 27,(13 + #var.ShapePaddingTop#),1,14 | Extend HoverColorState | Strokewidth 0
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth#  | StrokeStartCap Round | StrokeEndCap Round
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain# 

[shapeSpeakers]
Shape=#var.Shape.Base#
Shape2=Ellipse 24,(20 + #var.ShapePaddingTop#),(3 + ([MeasureBand2] * 2)) | Extend HoverSubColorState, GlobalStrokeWidth 
Shape3=Ellipse 24,(20 + #var.ShapePaddingTop#),(10 + ([MeasureBand1] * 1)) | Extend HoverColorState, GlobalStrokeWidth
Shape4=Ellipse 14,(10 + #var.ShapePaddingTop#),1.5 | Extend HoverSubColorState | StrokeWidth 0
Shape5=Ellipse 34,(10 + #var.ShapePaddingTop#),1.5 | Extend HoverSubColorState | StrokeWidth 0
Shape6=Ellipse 14,(30 + #var.ShapePaddingTop#),1.5 | Extend HoverSubColorState | StrokeWidth 0
Shape7=Ellipse 34,(30 + #var.ShapePaddingTop#),1.5 | Extend HoverSubColorState | StrokeWidth 0
GlobalStrokeWidth=StrokeWidth #var.StrokeWidth# | Fill Color 0,0,0,0
HoverColorState=Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#
HoverSubColorState=Stroke Color #var.ColorNeutralLight# | Fill Color #var.ColorNeutralLight# 


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