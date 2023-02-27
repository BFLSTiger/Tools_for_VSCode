#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
namespace Dango
{
	string cmd,tmp[5];
	int work(int argc,char **argv)
	{
		for(int i=0;i<argc;i++)
			tmp[i]=argv[i];
		if(tmp[3]==".py")cmd="cd /D "+tmp[1]+" && python "+tmp[2]+tmp[3];
		else if(tmp[3]==".java")cmd="cd /D "+tmp[1]+" && java "+tmp[2]+tmp[3];
		else if (tmp[3]==".bat")cmd="cd /D "+tmp[1]+" && "+tmp[2]+tmp[3];
		else cmd="cd /D "+tmp[1]+" && "+tmp[2];
		cout<<"----Programe Started----"<<endl;
		double start=clock();
		int res=system(cmd.c_str());
		double end=clock();
		cout<<endl;
		if(res)
		{
			cout<<"Runtime Error with exit code "<<res<<endl;
			return 0;
		}
		else cout<<"Time Used: "<<(end-start)/1000<<"s"<<endl;
		return 0;
	}
}
int main(int argc,char **argv)
{
	return Dango::work(argc,argv);
}