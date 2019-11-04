@echo off
echo Compiling the file "compile.cpp"
g++ compile.cpp -o compile -Ofast -std=c++11 -Wl,--stack=1024000000
echo Compiling the file "run.cpp"
g++ run.cpp -o run -Ofast -std=c++11 -Wl,--stack=1024000000
echo Moving the files
cd ../ && mkdir scripts
cd .install
move compile.exe ../scripts/
move run.exe ../scripts/
echo Installed successfully!
pause