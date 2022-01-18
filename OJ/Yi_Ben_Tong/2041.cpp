/**
 * 2041：【例5.9】新矩阵
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2041
 */
#include <iostream>
using namespace std;
const int MAXN =100;

int sq[MAXN][MAXN];

int main()	
{
	int n;
	cin >>n;

	for(int i=0;i<n;i++)//输入 
		for(int j=0;j<n;j++)
			cin >>sq[i][j];
			
	int x1=0,x2=n-1,y=0;//赋值
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
	
	for(int i=0;i<n;i++)//输出
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