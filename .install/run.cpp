#define opt "-Wl,--stack=1024000000 -O2 -std=c++11 -Wall -Wextra"
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
namespace Dango
{
	string cmd;
	int work(int argc, char **argv)
	{
		if (argc > 2)
		{
			cmd = argv[2];
			if (system(cmd.c_str()))
			{
				cout << "Compile Error." << endl;
				return -1;
			}
			cout << "----Compile Success----" << endl;
		}
		cmd = argv[1];
		cout << "----Programe Started----" << endl;
		double start = clock();
		int res = system(cmd.c_str());
		double end = clock();
		cout << endl;
		if (res)
		{
			cout << "Runtime Error with exit code " << res << endl;
			return 0;
		}
		else
			cout << "Time Used: " << (end - start) / CLOCKS_PER_SEC << "s" << endl;
		return 0;
	}
}
int main(int argc, char **argv)
{
	return Dango::work(argc, argv);
}