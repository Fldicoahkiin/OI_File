/**
 * 1169：大整数减法
 * 
 * //ybt.ssoier.cn:8088/problem_show.php?pid=1169
 * 未通过
 */
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
const int MAXN = 5000;

int a[MAXN],b[MAXN],c[MAXN];

int main()
{
	//	freopen("1169.in","r",stdin);
	string sa,sb;
	cin >>sa>>sb;
	
	//转换
	//倒着转的,123->321
	for(int i=0;i<sa.size();i++)
	{
		a[i]=sa[sa.size()-i-1]-'0';
	}
	for(int i=0;i<sb.size();i++)
	{
		b[i]=sb[sb.size()-i-1]-'0';
	}
	int len=max(sa.size(),sb.size());

	//减法
	for(int i=0;i<=len;i++)
	{
		c[i]=a[i]-b[i];
		if(c[i]<0)
		{
			a[i+1]--;
			c[i]+=10;
		}
	}
	for(int i=len-1;i>=0;i--)
	{
		while(c[i]==0 && !a[i]>0)
		{
			i--;
		}
		cout <<c[i];
	}cout <<endl;
	
	return 0;
}
