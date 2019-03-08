[MeasureSysVolume]
Group=group.VolumeBars
Measure=Plugin
Plugin=Win7AudioPlugin

;[MeasureSysVolumePerc]
;Group=group.VolumeBars
;Measure=Calc
;Formula=MeasureSysVolume / 100

;[MeasureSysVolumeBar1]
;Group=group.VolumeBars
;Measure=Calc
;Formula=MeasureSysVolume / 12

;[MeasureSysVolumeBar2]
;Group=group.VolumeBars
;Measure=Calc
;Formula=MeasureSysVolume / 8

;[MeasureSysVolumeBar3]
;Group=group.VolumeBars
;Measure=Calc
;Formula=MeasureSysVolume / 6

;[MeasureVU]
;Measure=Plugin
;Plugin=AudioLevel
;Port=Output
;RMSAttack=50
;RMSDecay=300
;RMSGain=2.5
;UpdateDivider=1

;[MeasureVULeft]
;Measure=Plugin
;Plugin=AudioLevel
;Parent=MeasureVU
;Channel=L
;Type=RMS
;UpdateDivider=1

;[MeasureVURight]
;Measure=Plugin
;Plugin=AudioLevel
;Parent=MeasureVU
;Channel=R
;Type=RMS
;UpdateDivider=1


[MeasureAudioLine]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTAttack=50
FFTDecay=50
Bands=3
UpdateDivider=1

[MeasureBand1]
UpdateDivider=1
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioLine
Type=Band
BandIdx=0
[MeasureBand2]
UpdateDivider=1
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioLine
Type=Band
BandIdx=1
[MeasureBand3]
UpdateDivider=1
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioLine
Type=Band
BandIdx=2