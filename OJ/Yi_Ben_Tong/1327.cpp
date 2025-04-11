/**
 * 1327：【例7.6】黑白棋子的移动
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1327
 */
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

#define MAXN 100000

int n,k,step;
char a[MAXN];

void printout(int step)
{
	cout <<"step"<<setw(2)<<step<<":";
	for(int i=1;i<=2*n+2;i++)
	{
		cout <<a[i];
	}
	cout <<endl;
	return;
}

void move(int k)
{
	a[2*k+1]=a[k];
	a[2*k+2]=a[k+1];
	a[k]=a[k+1]='-';
	printout(++step);
	
	a[k]=a[k+1]=a[2*k];
	a[2*k-1]=a[2*k]='-';
	printout(++step);
}

int main()
{
//	freopen("1327.in","r",stdin);
//	freopen("1327.out","w",stdout);
	
	cin >>n;
	
	//初始化
	for(int i=1;i<=n;i++)
	{
		a[i]='o';
		a[n+i]='*';
	}
	a[2*n+1]=a[2*n+2]='-';
	printout(step);
	
	k=n;
	while(k>4)
	{
		move(k--);
	}
	
	//直接手动滑稽
	a[1]='o';a[2]='o';a[3]='o';a[4]='-';a[5]='-';a[6]='*';a[7]='*';a[8]='*';a[9]='o';a[10]='*';
	printout(++step);
	
	a[1]='o';a[2]='o';a[3]='o';a[4]='*';a[5]='o';a[6]='*';a[7]='*';a[8]='-';a[9]='-';
	printout(++step);
	
	a[1]='o';a[2]='-';a[3]='-';a[4]='*';a[5]='o';a[6]='*';a[7]='*';a[8]='o';a[9]='o';
	printout(++step);
	
	a[1]='o';a[2]='*';a[3]='o';a[4]='*';a[5]='o';a[6]='*';a[7]='-';a[8]='-';a[9]='o';
	printout(++step);
	
	a[1]='-';a[2]='-';a[3]='o';a[4]='*';a[5]='o';a[6]='*';a[7]='o';a[8]='*';a[9]='o';
	printout(++step);
	
	return 0;
}