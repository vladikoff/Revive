/* 
Note: The files should be arranged as follows:
   ReviveInjector.exe
   Revive\x86\openvr_api.dll
   Revive\x86\LibRevive32_1.dll
   Revive\x64\openvr_api.dll
   Revive\x64\LibRevive64_1.dll
*/
int CreateProcessAndInject(char *programPath);