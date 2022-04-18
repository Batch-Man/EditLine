@Echo off
cls
Mode 120, 25

Set "Path=%Path%;%cd%;"
Set "_FilePath=%cd%"
pushd "..\bin"

Title Demo EditLine - www.batch-man.com

Echo. Current Data of Line 2...
ReadLine "%_FilePath%\designmap.xml" 2
Echo.
timeout /t 2 >nul
Echo.
:Loop
Set _Version=
Set /P "_Version=New Version Number: "
If Not defined _Version (Goto Loop)

Echo. Modifying Line 2 with EditLine Plugin...
EditLine "%_FilePath%\designmap.xml" 2 "product=" ")" "(%_Version%)"
Echo.
timeout /t 2 >nul
Echo. Modified Data of Line 2...
ReadLine "%_FilePath%\designmap.xml" 2
Echo.
popd
pause
exit
