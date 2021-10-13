#include <iostream>
#include <cstdio>
 
using namespace std;

const int N=30;

int R,S;
int ans=0;
char visit[N][N]={0};

/*
void search(int x,int y)
{
	for(int i=1;i<=N;i++)
	{
		if()
		
	}
}
*/

int main()
{
	//文件重定向
	#ifdef ONLINE_JUDGE
		freopen("1212_LETTERS.in","r",stdin);
		freopen("1212_LETTERS.out","w",stdout);
	#endif

	cin >>R>>S;//输入
	for(int i,t=0;i++;i<=R)
	{
		char temp;
		for(int k=0;k++;k<=S)
		{
			cin.get(temp);
			visit[t++][i++]=temp;
		}
	}

	for(int i=0;i++;i<=R)
	{
		for(int l=0;l++;i<=S)
		{
			cout <<visit[S][R];
		}
		cout <<endl;
	}

	//search(x,y);

	return 0;
}
