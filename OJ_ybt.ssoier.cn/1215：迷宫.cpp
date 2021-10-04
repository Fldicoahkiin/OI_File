#include <iostream>
#include <cstdio>

uisng namespace std;

int k;//测试数据的组数k，后面跟着k组输入
int n;//迷宫的规模是n×n
char nmap;//一个n×n的矩阵，矩阵中的元素为.或者#
int ha,la,hb,lb;//描述A处在第ha行, 第la列，B处在第hb行, 第lb列。注意到ha,la,hb,lb全部是从0开始计数的。

int map[101][101]={0};
int tempmap[101]={0};

int pass=0;//判断是否到达终点 

void fuckin(int i)//将临时数组转进二维数组Map 
{
	for(int j=0;j<n;j++)// 
	{
		if(tempmap[j]=='#')
			map[i][j]=1;//1表示即为已走过或有墙
	}
	return;
}


void search(int y,int x)
{
	
}

int main()
{
	scanf("%d \n %d",&k,&n);//输入 
	for(int i=1;i<=k;i++)//循环K次 
	{
		pass=0;
		for(int j=0;j<n;j++)
		{
			gets(tempmap);
			cin >>ha>>la>>ny>>nx; 
			fuckin(j);
		}
		search(ha,la);
		if(pass) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	}
	return 0;
}
