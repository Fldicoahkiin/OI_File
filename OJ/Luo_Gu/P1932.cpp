/**
 * P1932 A+B A-B A*B A/B A%B Problem
 * 
 * https://www.luogu.com.cn/problem/P1932
 * 没写完
 */
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
const int MAXN = 5000;

int a[MAXN],b[MAXN],c[MAXN];

bool string_compare(string a,string b)
{
	if(a.size()>b.size()) return true;
	if(a.size()==b.size())
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>=b[i])
			{
				return true;
				break;
			}
			if(a[i]<b[i])
			{
				return false;
				break;
			}
		}
	}
	return false;
}

int main()
{
	freopen("P1932_1.in","r",stdin);
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
	
	//加法
	int len=max(sa.size(),sb.size());
	
	for(int i=0;i<len;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<len;i++)
	{
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	if(c[len]>0) len++;
	
	for(int i=len-1;i>=0;i--)
	{
		cout <<c[i];
	}
	cout <<endl;
	
	//减法
	len=max(sa.size(),sb.size());
	if(!string_compare(sa,sb))
	{
		swap(a,b);	
		cout <<"-";
	}
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
