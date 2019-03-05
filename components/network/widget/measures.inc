[MeasureHostName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=HOST_NAME
UpdateDivider=60
DynamicVariables=1

[MeasureAdapterName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=ADAPTER_TYPE
SysInfoData=Best
DynamicVariables=1

[MeasureIPAddress]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=Best
UpdateDivider=5
DynamicVariables=1

[MeasureExtIP]
Measure=Plugin
Plugin=WebParser
UpdateRate=21600
Url=http://checkip.dyndns.org
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1