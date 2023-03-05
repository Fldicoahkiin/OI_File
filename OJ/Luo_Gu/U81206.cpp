#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100000000;

int cnt=1;//计数
int head[MAXN];//链表
struct Node
{
	int nxt;//下一个
	int to;//终点
	int val;//值
} E[MAXN];

inline void add(int x,int y,int z)
{
	E[cnt].nxt=head[x];
	E[cnt].to=y;
	E[cnt].val=z;
	head[x]=cnt++;
}

int main()
{
	int n,m,flag;
	cin>>n>>m>>flag;
	for(int i=1;i<=m;i++)
	{
		int tempx,tempy,tempz;
		cin>>tempx>>tempy>>tempz;
		add(tempx,tempy,tempz);
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<"head["<<i<<"]:"<<head[i]<<endl;
	}
	
	if(flag==1)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<head[i]<<' '<<E[head[i]].to<<' '<<E[head[i]].val<<endl;
		}
	}
	if(flag==0)
	{
		for(int i=1;i<=m*2;i++)
		{
			return 0;
		}
	}
	return 0;
}