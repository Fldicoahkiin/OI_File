#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int L,M,s=0,strat,end;//tree=L+1
	cin >>L>>M;
	bool road[L+1];
	memset(road,0,sizeof(road));
	for(int i=1;i<=M;i++)//区域赋值到数组为1 
	{
		cin >>strat>>end;
		for(int j=strat;j<=end;j++)
		{
			road[j]=1;
		}
	}
	for(int i=0;i<=L;i++)//统计 
	{
		if(road[i]==0)
		{
			s++;
		} 
	}
	cout <<s<<endl;
	return 0;
}
