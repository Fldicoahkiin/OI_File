#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,m;
	cin >>n>>m;
	bool light[n+1];
	memset(light,0,sizeof(light));
	for(int j=2;j<=m;j++)//���෴
	{
		for(int k=j;k<=n;k++)//ѭ����ⱶ��
		{
			if(k%j==0)
			{
				light[k]=!light[k];
			}
		}
	}
	for(int i=1;i<=n;i++)//���
	{
		if(light[i]==0)
		{
			if(i==1)
			{
				cout <<i;
			}
			else
			{
				cout <<","<<i;
			}
		}
	}
	return 0;
}
