[MeasureSysVolume]
Group=group.VolumeBars
Measure=Plugin
Plugin=Win7AudioPlugin

[MeasureSysVolumeBar1]
Group=group.VolumeBars
Measure=Calc
Formula=MeasureSysVolume / 12

[MeasureSysVolumeBar2]
Group=group.VolumeBars
Measure=Calc
Formula=MeasureSysVolume / 8

[MeasureSysVolumeBar3]
Group=group.VolumeBars
Measure=Calc
Formula=MeasureSysVolume / 6

[MeasureVU]
Measure=Plugin
Plugin=AudioLevel
Port=Output
RMSAttack=50
RMSDecay=300
RMSGain=2.5
UpdateDivider=1

[MeasureVULeft]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureVU
Channel=L
Type=RMS
UpdateDivider=1

[MeasureVURight]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureVU
Channel=R
Type=RMS
UpdateDivider=1