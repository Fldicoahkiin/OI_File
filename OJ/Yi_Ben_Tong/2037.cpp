/**
 * 2037：【例5.4】约瑟夫问题
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2037
 */
#include<iostream>
#include<cstring>
using namespace std;
const int MAXN = 1000;

bool a[MAXN]={true};//1代表圈内有,0代表圈内无

int main()
{
	int N,M;
	cin>>N>>M;

	a[0]=0;//没有这个人
	int survivor=N;
	for(int i=1,j=0;survivor;i++)
	{
		if(a[i])//数数数到了这个人还在
		{
			j++;//活人才能数数
			if(j==M)
			{
 				cout<<i<<" ";
  				a[i]=0;
  				survivor--;
  				j=0;
			}
		}
		if(i==N) i=0;
	}
	return 0;
}