#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<string>
#include<ctime>
#include<sys/time.h>
using namespace std;
namespace Dango
{
	string cmd,tmp[5];
	int work(int argc,char **argv)
	{
		for(int i=0;i<argc;i++)
			tmp[i]=argv[i];
		if(tmp[3]==".py")cmd="python3 "+tmp[1]+"/"+tmp[2]+tmp[3];
		else cmd=tmp[1]+"/"+tmp[2];
		cout<<"----Programe Started----"<<endl;
		timeval start,end;
    	gettimeofday(&start,NULL);
		long long res=system(cmd.c_str());
    	gettimeofday(&end,NULL);
		cout<<endl;
		double delta = (end.tv_sec-start.tv_sec) + 
                    (end.tv_usec-start.tv_usec)/1000000.0;
		if(res)
		{
			cout<<"Runtime Error with exit code "<<res<<endl;
			return 0;
		}
		else cout<<"Time Used: "<<delta<<"s"<<endl;
		return 0;
	}
}
int main(int argc,char **argv)
{
	return Dango::work(argc,argv);
}
