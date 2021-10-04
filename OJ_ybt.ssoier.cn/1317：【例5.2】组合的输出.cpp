//搜索与回溯算法 
#include <iostream>
#include <iomanip>

using namespace std;

int nz[21]={0};//n个元素的数组，若为1则表示已经用过即用来判断是否占用 
int rz[21]={0};//要输出表示的数组，要对其进行赋值 
int n,r;

void onputt(int r)//输出-->输出数组的函数 
{
	for(int i=1;i<=r;i++)
	{
		cout <<setw(3)<<rz[i];
	}
	cout <<endl;
	return;
}

void search(int k)//k表示要输出的位置,n表示总元素,r表示输出的最大数量
{
	
	for(int i=1;i<=n;i++)//循环r次以填满rz数组 
	{
		if(nz[i]==0 && rz[k-1]<i)//判断当前位未被占用且上一位小于当前位 
		{
			nz[i]=1;//将此数标为已用 
			rz[k]=i;//将i填入rz数组
			if(k==r)
			{
				onputt(r);//若已填满则输出 
			}
			else
			{
				search(k+1);//递归 
			}
			nz[i]=0;//回溯
			//rz[i]=0;
		}
	}
	return;//结束函数 
}

int main()
{
	cin>>n>>r;
	search(1);
	return 0;
} 
