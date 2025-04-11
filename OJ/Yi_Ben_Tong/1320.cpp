/**
 * 1320：【例6.2】均分纸牌(Noip2002)
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1320
 */
#include <iostream>
#include <cstdio>

using namespace std;

int n;
int a[102];
int sum=0,average;
int t=0;//计数

int main()
{
	freopen("1320.in", "r" , stdin); 
//	freopen("1320.out", "w" , stdout); 

	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i]; 
		sum += a[i];
	}

	average=sum/n;

	for(int i=0;i<n;i++)//将a数组中的牌数转化为与平均数的差值
	{
		a[i]-=average;
	}

	for(int i=0;i<n-1;i++)
	{
		if(a[i]==0)//如果已到达平均数，则i++进行下一个数的判断
		{
			continue;
		}
		else
		{
			a[i+1]+=a[i];//放牌
			t++;
		}
	}

	cout <<t;
	return 0;
}