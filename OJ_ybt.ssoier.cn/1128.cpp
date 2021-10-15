#include <iostream>
#include <cmath>
using namespace std;
int pic[101][101];
double mo[101][101];
int main()
{
	int n,m;
	cin >>n>>m;

	for(int i=0;i<n;i++)//输入
		for(int j=0;j<m;j++)
		{
			cin>>pic[i][j];
			mo[i][j]=pic[i][j];
		}

	for(int y=1;y<n-1;y++)
	{
		for(int x =1;x<m-1;x++)
		{
			mo[y][x] = round( (pic[y][x] + pic[y+1][x] + pic[y-1][x] + pic[y][x+1] + pic[y][x-1] ) / 5.0);
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
				cout <<mo[i][j]<<" "; 
		}
		
		if(i<n-1)
		{
			cout <<endl;
		}
	}
	return 0;
}
