/**
 * 1107：校门外的树

 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1107
 */
#include <iostream>
#include<cstring>
using namespace std;

int L,M,s=0,strat,End;//tree=L+1
bool road[10001];

int main()
{
	cin >>L>>M;
	for(int i=1;i<=M;i++)//区域赋值到数组为1 
	{
		cin >>strat>>End;
		for(int j=strat;j<=End;j++)
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