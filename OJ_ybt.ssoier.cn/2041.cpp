#include <iostream>
using namespace std;

int main()	
{
	int n;
	cin >>n;
	int sq[n][n];
	for(int i=0;i<n;i++)//ÊäÈë 
		for(int j=0;j<n;j++)
			cin >>sq[i][j];
			
	int x1=0,x2=n-1,y=0;//¸³Öµ
	for(int y=0;y<n;y++)
	{
		if(x1!=x2)
		{
			sq[y][x1]=sq[y][x1]+10;
			sq[y][x2]=sq[y][x2]+10;
			x1++;
			x2--;
		}
		else
		{
			sq[y][x1]=sq[y][x1]+10;
			x1++;
			x2--;
		}
	}
	
	for(int i=0;i<n;i++)//Êä³ö
	{
		for(int j=0;j<n;j++)
		{
			cout <<sq[i][j];
			cout <<" ";
		}
		if(i<n-1)
		{
			cout <<endl;
		}
	}
	return 0;
}
