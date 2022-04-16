cmake -S E:/MyProjects/my-exec_001/myshortcuts ^
-B E:/MyProjects/my-exec_001/build-myshortcuts-Desktop_Qt_5_12_10_MSVC2017_64bit-Debug ^
-G "NMake Makefiles JOM" ^
-DCMAKE_BUILD_TYPE:String=Debug ^
-DQT_QMAKE_EXECUTABLE:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64/bin/qmake.exe ^
-DCMAKE_PREFIX_PATH:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64 



:Visual Studio 17 2022
cmake -S E:/MyProjects/my-exec_001/myshortcuts ^
-B E:/MyProjects/my-exec_001/build-myshortcuts-Desktop_Qt_5_12_10_MSVC2017_64bit-Debug ^
-G "Visual Studio 17 2022" ^
-DCMAKE_BUILD_TYPE:String=Debug ^
-DQT_QMAKE_EXECUTABLE:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64/bin/qmake.exe ^
-DCMAKE_PREFIX_PATH:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64 

@pause
@exit /b 0

:Original
-G "NMake Makefiles JOM" ^
-DCMAKE_BUILD_TYPE:String=Debug ^
-DQT_QMAKE_EXECUTABLE:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64/bin/qmake.exe ^
-DCMAKE_PREFIX_PATH:STRING=E:/Qt/Qt5.12.10/5.12.10/msvc2017_64 ^
-DCMAKE_C_COMPILER="C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/BIN/cl.exe"
-DCMAKE_CXX_COMPILER:STRING="C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/BIN/cl.exe"