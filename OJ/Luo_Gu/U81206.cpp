#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAXN = 4000001;

ll cnt;//计数
ll head[MAXN];//起点
struct Node
{
	ll nxt;//下一条边
	ll to;//终点
	ll val;//值
} E[MAXN];

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}

inline void add(ll from,ll to,ll val)
{
	E[cnt].to=to; 
	E[cnt].val=val;
	E[cnt].nxt=head[from];
	head[from]=cnt++;
	return;
}

int main()
{
	ll n,m,flag;
	n=read();
	m=read();
	flag=read();
	
	memset(head,-1,sizeof(head));
	
	for(ll i=1;i<=m;i++)
	{
		ll tempx,tempy,tempz;
		tempx=read();
		tempy=read();
		tempz=read();

		add(tempx,tempy,tempz);
		if(flag==0)
		{
			add(tempy,tempx,tempz);
		}
	}
	
	for(ll i=1;i<=n;i++)
	{
		for(ll j=head[i];j!=-1;j=E[j].nxt)
		{
			printf("%lld %lld %lld\n",i,E[j].to,E[j].val);
			//cout<<i<<' '<<E[j].to<<' '<<E[j].val<<endl;
		}
	}
	return 0;
}