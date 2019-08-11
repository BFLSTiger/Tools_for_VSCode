echo Compiling the file "compile.cpp"
g++ compile.cpp -o compile -Ofast -std=c++11 -w
echo Compiling the file "run.cpp"
g++ run.cpp -o run -Ofast -std=c++11 -w
echo Moving the files
mkdir ../scripts
mv compile ../scripts/
mv run ../scripts/
cat compile_options > ../scripts/compile_options
echo Installed successfully
