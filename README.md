# Summary
This is my configuation files of VSCode for Ubuntu.
It has already supported `C++` and `Python`.

#Requirs
+ Before you use this, you must install `g++`.
+ The following extensions for VSCode are recommended:
    + `C/C++`(ms-vscode.cpptools)
    + `C++ Intellisense`(austin.code-gnu-global)

# Setup
To begin with, open your workspace folder and clone this to your computer.
```sh
git clone -b VSCode-Configuration-File-for-Ubuntu https://github.com/BFLSTiger/Tools_for_VSCode.git ./.vscode
```
Then, open terminal in the directory `.vscode` and execute the following command to install the scripts.
```sh
cd .install
./install.sh
```

Here are some items need to be modified before using it:
+ Line 17 and 18 of `./c_cpp_properties.json` (Version of the C/C++ language standard to use for intellisense)

You can also change other things to make it adapt to your personal habits.

# Functions
## Compile & Run (default 'build' task)
You can use it to compile your source code and execute it.
If you want to change the compile options, you can edit the first line of the file `./.install/compile.cpp` and run `install.sh` again.

## Run (default 'test' task)
You can use it to execute your code if you have compiled it before.
