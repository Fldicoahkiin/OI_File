/**
 * 1132：石头剪子布
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1132
 * 未通过
 */
#include <iostream>
#include <cstdio>
using namespace std;

char a[101];
char b[101];

int main()
{
	int N;
	cin >>N;
	for(int i=0;i<N;i++)
	{
		cin >>a>>b;
		if(a[0]=='R' && b[0]=='S')
		{
			cout <<"Player1"<<endl;
		}
		else
		{
			cout <<"Player2"<<endl;
		}
		if(a[0]==b[0])
		{
			cout <<"Tie"<<endl;
		}
		if(a[0]=='R' && b[0]=='P')
		{
			cout <<"Player2"<<endl;
		}
		else
		{
			cout <<"Player1"<<endl;
		}
		if(a[0]=='S' && b[0]=='P')
		{
			cout <<"Player1"<<endl;
		}
		else
		{
			cout <<"Player2"<<endl;
		}
	}
	return 0;
}