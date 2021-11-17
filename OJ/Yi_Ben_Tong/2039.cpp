//2039：【例5.6】冒泡排序
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	int a[20];
	for(int i=0;i<=n-1;i++)//读取
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
	for(int i=0;i<n;i++)//输出
	{
		cout <<a[i]<<endl;
	}
	return 0;	
}
