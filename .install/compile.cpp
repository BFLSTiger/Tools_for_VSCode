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
	string cmd,opt,tmp[5];
	int work(int argc,char **argv)
	{
		for(int i=0;i<argc;i++)
			tmp[i]=argv[i];
		if(tmp[3]==".py")return 0;
		if(tmp[3]!=".cpp"){cout<<"Not support this kind of language."<<endl;return -1;}
		getline(cin,opt);
		cmd="g++ "+tmp[1]+"/"+tmp[2]+tmp[3]+" -o "+tmp[1]+"/"+tmp[2]+" "+opt;
		if(system(cmd.c_str())){cout<<"Compile Error."<<endl;return -1;}
		cout<<"----Compile Success----"<<endl;
		return 0;
	}
}
int main(int argc,char **argv)
{
	freopen("compile_options","r",stdin);
	return Dango::work(argc,argv);
}