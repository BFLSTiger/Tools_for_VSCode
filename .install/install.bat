@echo off
echo Compiling the file "run.cpp"
g++ run.cpp -o run -Ofast -std=c++11 -Wl,--stack=1024000000 -static
echo Moving the files
cd ../ && mkdir scripts
cd .install
move run.exe ../scripts/
code --install-extension ./extension.vsix