#include<iostream>

using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	bool a[N+1];//1����Ȧ����
	memset(a,1,sizeof(a));//0����Ȧ����
	a[0]=0;//û�������
	int survivor=N;
	for(int i=1,j=0;survivor;i++)
	{
		if(a[i])//���������������  ����
		{
			j++;//���˲�������
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
