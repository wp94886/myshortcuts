cmake -S %~dp0 ^
-B %~dp0cmake-build-nmake ^
-G "NMake Makefiles" ^
-DCMAKE_BUILD_TYPE:String=Debug ^
-DQT_QMAKE_EXECUTABLE:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64/bin/qmake.exe ^
-DCMAKE_PREFIX_PATH:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64 
