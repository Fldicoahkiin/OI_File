/**
 * 1325������7.4�� ѭ�������ճ̱�
 * �ⷨ:����Ŀû�а�ëǮ��ϵ,���ǵ������ҹ���
 */
#include <iostream>

#define MAXN 1000

using namespace std;

int matchlist[MAXN][MAXN];

int main()
{
	int M;
	cin >>M;
	int n=1<<M;//��nΪ2��M�η�
	
	matchlist[1][1]=1;
	
	int k=1;//k��Ϊ2��i�η�
	for(int i=1;i<=M;i++)
	{
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				matchlist[i][j+k]=matchlist[i][j]+k;
			}	
		}
			
		
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				matchlist[i+k][j]=matchlist[i][j+k];
				matchlist[i+k][j+k]=matchlist[i][j];
			}
		}
			
//		k=k*2;
		k=1<<i;
	}
	for(int i=1;i<=n;i++)//���
	{
		for(int j=1;j<=n;j++)
		{
			cout <<matchlist[i][j]<<" ";
		}
		cout <<endl;
	}

	return 0;
}
