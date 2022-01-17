/**
 * 1106：年龄与疾病
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1106
 */
#include <iostream>
#include <iomanip>
using namespace std;

int p[101];
double r,a[4]={0,0,0,0};

int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>p[i];
	}
	for(int j=0;j<n;j++)
	{
		if((p[j]>=0) && (p[j]<=18))
		{
			a[0]++;
		}
		if((p[j]>=19) && (p[j]<=35))
		{
			a[1]++;
		}
		if((p[j]>=36) && (p[j]<=60))
		{
			a[2]++;
		}
		if(p[j]>=61)
		{
			a[3]++;
		}
	}
	//cout <<a[0]<<endl;
	//cout <<a[1]<<endl;
	//cout <<a[2]<<endl;
	//cout <<a[3]<<endl;
	for(int k=0;k<4;k++)
	{
		r = a[k]/n;
		//cout <<r<<endl;
		cout <<setprecision(2)<<fixed<<r*100;
		cout <<"%"<<endl;
	}
	return 0;
}