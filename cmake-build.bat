@pushd %~dp0
cmake --build ^
../build-myshortcuts-Desktop_Qt_5_12_10_MSVC2017_64bit-Debug ^
--config Debug 
popd
@pause
@exit /b 0

