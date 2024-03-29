#define opt "-Wl,--stack=1024000000 -O2 -std=c++11 -Wall -Wextra"
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
namespace Dango
{
	string cmd,tmp[5];
	int work(int argc,char **argv)
	{
		for(int i=0;i<argc;i++)
			tmp[i]=argv[i];
		if(tmp[3]==".py"||tmp[3]==".bat")return 0;
		if(tmp[3]!=".cpp"&&tmp[3]!=".c"){cout<<"Not support this kind of language."<<endl;return -1;}
		if(tmp[3]==".cpp")cmd="g++ \""+tmp[1]+"/"+tmp[2]+tmp[3]+"\" -o \""+tmp[1]+"/"+tmp[2]+"\" "+opt;
		else if(tmp[3]==".c")cmd="gcc \""+tmp[1]+"/"+tmp[2]+tmp[3]+"\" -o \""+tmp[1]+"/"+tmp[2]+"\"";
		if(system(cmd.c_str())){cout<<"Compile Error."<<endl;return -1;}
		cout<<"----Compile Success----"<<endl;
		return 0;
	}
}
int main(int argc,char **argv)
{
	return Dango::work(argc,argv);
}