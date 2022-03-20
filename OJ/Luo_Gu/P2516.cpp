/**
 * P2516 [HAOI2010]最长公共子序列
 * 
 * https://www.luogu.com.cn/problem/P2516
 */
#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN =10000;

int X[MAXN],Xn=1;
int Y[MAXN],Yn=1;

char ch;//temp
int f[MAXN][MAXN],g[MAXN][MAXN];
//f为最长公共子序列的长度
//g为所有可能出现的最长公共子序列个数

int main()
{
	freopen("P2516.in","r",stdin);

	//洛谷读法
	for(int i=1;(ch=getchar())!='.';X[i]=ch,Xn=i,i++);
	getchar();//换行
	for(int i=1;(ch=getchar())!='.';Y[i]=ch,Yn=i,i++);

	//一本通1265读法
	/*
	while((ch=getchar())>='A'&&ch<='Z')
	{
		if(ch=='\n')
			break;
		X[Xn++]=ch;
	}
	while((ch=getchar())>='A'&&ch<='Z')
	{
		Y[Yn++]=ch;
	}
	*/

	for(int i=1;i<=Xn;i++)
	{
		for(int j=1;j<=Yn;j++)
		{
			if(X[i-1]==Y[j-1])
			{
				f[i][j]=f[i-1][j-1]+1;
			}
			else
			{
				f[i][j]=max(f[i-1][j],f[i][j-1]);
			}
		}
	}
	
	cout <<f[Xn][Yn];
	return 0;
}
