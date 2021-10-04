#include <iostream>

using namespace std;

int san[20][20]={{0,1},{1,1,1}};

int main()
{
	int n,x;
	cin >>n;

	for(int i=1;i<=n;i++)//¸³Öµ 
	{
		for(x=1;x<=i;x++)
		{
			san[x][i]=1;
			if((x>=2)&&(x!=i))
			{
				san[x][i]=san[x][i-1]+san[x-1][i-1];
			}
		}
	}

	for(int j=1;j<=n;j++)//Êä³ö
	{
		for(int k=1;k<=j;k++)
		{
			cout <<san[k][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}
