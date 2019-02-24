;========================================================================
;                 Style Sheet for Blocks and Widgets
;========================================================================
;   Declare reusable generic styles here.


[style.Text]
DynamicVariables=1
StringAlign=LeftTop
StringCase=Upper
FontFace=#var.FontFace#
AntiAlias=1
ClipString=2
FontColor=#var.FontColor#
StringEffect=Border
StringEffectColor=0,0,0,255

[style.Text.Small]
FontSize=#var.FontSizeSmall#
Padding=#var.PaddingHTextSmall#,(#var.PaddingVText# + 5),#var.PaddingHTextSmall#,#var.PaddingVText#
ClipStringW=(#var.WidgetWidth# - (#var.PaddingHTextSmall# * 2))

[style.Text.Small.Padding.Left]
Padding=#var.PaddingHTextSmall#,5,0,0

[style.Text.Small.Padding.Right]
Padding=0,5,#var.PaddingHTextSmall#,0

[style.Text.Small.Padding.Top]
Padding=#var.PaddingHTextSmall#,(#var.PaddingVText# + 5),#var.PaddingHTextSmall#,0

[style.Text.Small.Padding.Bottom]
Padding=#var.PaddingHTextSmall#,5,#var.PaddingHTextSmall#,#var.PaddingVText#

[style.Text.Medium]
FontSize=#var.FontSizeMedium#
Padding=#var.PaddingHTextMedium#,(#var.PaddingVText# + 5),#var.PaddingHTextMedium#,#var.PaddingVText#
ClipStringW=(#var.WidgetWidth# - (#var.PaddingHTextMedium# * 2))

[style.Text.Medium.Padding.Left]
Padding=#var.PaddingHTextMedium#,5,0,0

[style.Text.Medium.Padding.Right]
Padding=0,5,#var.PaddingHTextMedium#,0

[style.Text.Medium.Padding.Top]
Padding=#var.PaddingHTextMedium#,(#var.PaddingVText# + 5),#var.PaddingHTextMedium#,0

[style.Text.Medium.Padding.Bottom]
Padding=#var.PaddingHTextMedium#,5,#var.PaddingHTextMedium#,#var.PaddingVText#

[style.Text.Large]
FontSize=#var.FontSizeLarge#
Padding=#var.PaddingHTextLarge#,(#var.PaddingVText# + 5),#var.PaddingHTextLarge#,#var.PaddingVText#
ClipStringW=(#var.WidgetWidth# - (#var.PaddingHTextLarge# * 2))

[style.Text.Large.Padding.Left]
Padding=#var.PaddingHTextLarge#,5,0,0

[style.Text.Large.Padding.Right]
Padding=0,5,#var.PaddingHTextLarge#,0

[style.Text.Large.Padding.Top]
Padding=#var.PaddingHTextLarge#,(#var.PaddingVText# + 5),#var.PaddingHTextLarge#,0

[style.Text.Large.Padding.Bottom]
Padding=#var.PaddingHTextLarge#,5,#var.PaddingHTextLarge#,#var.PaddingVText#

[style.Text.Huge]
FontSize=#var.FontSizeHuge#
Padding=#var.PaddingHTextHuge#,(#var.PaddingVText# + 5),#var.PaddingHTextHuge#,#var.PaddingVText#
ClipStringW=(#var.WidgetWidth# - (#var.PaddingHTextHuge# * 2))

[style.Text.Huge.Padding.Left]
Padding=#var.PaddingHTextHuge#,5,0,0

[style.Text.Huge.Padding.Right]
Padding=0,5,#var.PaddingHTextHuge#,0

[style.Text.Huge.Padding.Top]
Padding=#var.PaddingHTextHuge#,(#var.PaddingVText# + 5),#var.PaddingHTextHuge#,0

[style.Text.Huge.Padding.Bottom]
Padding=#var.PaddingHTextHuge#,5,#var.PaddingHTextHuge#,#var.PaddingVText#
