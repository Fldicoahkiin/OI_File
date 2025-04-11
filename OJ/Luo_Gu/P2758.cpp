#include <iostream>
#include <cstdio>
using namespace std;

const int MAXN =10000;

char A[MAXN],B[MAXN];
int An,Bn,dp[MAXN][MAXN];

int main()
{
	//freopen("xx.in","r",stdin);
	//freopen("xx.out","w",stdout);
	char ch;
	while((ch=getchar())>='a'&&ch<='z')
	{
		if(ch=='\n')
			break;
		A[++An]=ch;
		//cout <<A[An]<<An<<' ';
	}//cout <<"\n";
	while((ch=getchar())>='a'&&ch<='z')
	{
		B[++Bn]=ch;
		//cout <<B[Bn]<<Bn<<' ';
	}//cout <<"\n";
	
	//cout <<An<<' '<<Bn<<"\n";
	for(int i=1;i<An;i++)
	{
    	dp[i][1]=i ;
    }
    for(int i=1;i<Bn;i++)
    {
        dp[1][i]=i;
    }
	for(int i=1;i<An;i++)
	{
        for(int j=1;j<Bn;j++)
        {
        	if(A[i]==B[j])
        	{
        		dp[i][j]=min(dp[i][j],dp[i+1][j+1]);
        	}
        	else
        	{
        		f[i][j]=min(f[i][j],f[i-1][j-1]+1);//上一位的基础上加"替换"
                f[i][j]=min(f[i][j],f[i][j-1]+1);//上一个的基础上加"添加"
                f[i][j]=min(f[i][j],f[i-1][j]+1);//上一位的基础上加"删除" 

        	}
        }
    }
    cout <<dp[An][Bn];
	return 0;
}