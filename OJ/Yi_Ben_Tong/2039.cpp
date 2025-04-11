/**
 * 2039：【例5.6】冒泡排序
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2039
 */
#include <iostream>
#include <algorithm>
using namespace std;

int a[30];

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++)//读取
	{
		cin >>a[i];
	}

	for(int i=0;i<n-1;i++)//排序
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j] < a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	
//	sort(a,a+n,cmp);

	for(int i=0;i<n;i++)//输出
	{
		cout <<a[i]<<endl;
	}
	return 0;	
}