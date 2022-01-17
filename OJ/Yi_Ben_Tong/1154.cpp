/**
 * 1154：亲和数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1154
 */
#include <iostream>
using namespace std;

int yinhe(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			// cout <<"i="<<i<<endl; 
			s+=i;
			//a/=i;
		}
	}
	return s;
}

int main()
{
	for(int j=1; ;j++)
	{
		if(j==yinhe(yinhe(j)) && j!=(yinhe(j)))//
		{
			cout <<j<<" "<<yinhe(j);
			break;
		}
	}
	return 0;
}