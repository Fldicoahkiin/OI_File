/**
 * 1317：【例5.2】组合的输出
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1317
 */
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

const int N=21; 

int visit[N]={0};
int ans[N]={0};
int n,r;

void onputt(int r)
{
	for(int i=1;i<=r;i++)
	{
		cout <<setw(3)<<ans[i];
	}
	cout <<endl;
	return;
}

void search(int k)
{
	for(int i=1;i<=n;i++) 
	{
		if(visit[i]==0 && ans[k-1]<i)
		{
			visit[i]=1;
			ans[k]=i;
			if(k==r)
			{
				onputt(r);
			}
			else
			{
				search(k+1);//递归 
			}
			visit[i]=0;//回溯
		}
	}
	return;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
		freopen("1317.in", "r", stdin);
		freopen("1317.out", "w", stdout);
	#endif
	
	cin>>n>>r;
	search(1);
	return 0;
}