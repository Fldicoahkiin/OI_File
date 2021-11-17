#include <iostream>

using namespace std;

int a[21][21]={0};

int main()
{
	int n;
	cin>>n;
	int x=n-1,y=0,t=1;
	a[0][n-1]=1;
	while(t<n*n)
	{
		while(y<n-1 && !a[y+1][x])//向下
			a[++y][x]=t++;
		while(x-1>=0 && !a[y][x-1])//向左 
			a[y][--x]=t++;
		while(y-1>=0 && !a[y-1][x])//向上 
			a[--y][x]=t++;
		while(x<n-1 && !a[y][x+1])//向右 
			a[y][++x]=t++;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout <<a[i][j]<<" ";
		}
		cout <<endl;
	}
	return 0;
}
