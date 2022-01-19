/**
 * P1601 A+B Problem（高精）
 * 
 * https://www.luogu.com.cn/problem/P1601
 */
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
const int MAXN =5000;

int a[MAXN],b[MAXN],c[MAXN];

int main()
{
	//freopen("P1601.in","r",stdin);
	string Sa,Sb;
	cin >>Sa>>Sb;
	
	//转换
	for(int i=0;i<Sa.size();i++)
	{
		a[i]=Sa[Sa.size()-i-1]-'0';
	}
	for(int i=0;i<Sb.size();i++)
	{
		b[i]=Sb[Sb.size()-i-1]-'0';
	}
	
	int len=max(Sa.size(),Sb.size());
	//运算
	for(int i=0;i<len;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	//处理进位
	for(int i=0;i<len;i++)
	{
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	
	if(c[len]>0) len++;
	
	//输出
	for(int i=len-1;i>=0;i--)
	{
		cout <<c[i];
	}
	return 0;
}