#include<iostream>

using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	bool a[N+1];//1代表圈内有
	memset(a,1,sizeof(a));//0代表圈内无
	a[0]=0;//没有这个人
	int survivor=N;
	for(int i=1,j=0;survivor;i++)
	{
		if(a[i])//数数数到了这个人  还在
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
