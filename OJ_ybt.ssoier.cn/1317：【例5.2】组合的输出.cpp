//����������㷨 
#include <iostream>
#include <iomanip>

using namespace std;

int nz[21]={0};//n��Ԫ�ص����飬��Ϊ1���ʾ�Ѿ��ù��������ж��Ƿ�ռ�� 
int rz[21]={0};//Ҫ�����ʾ�����飬Ҫ������и�ֵ 
int n,r;

void onputt(int r)//���-->�������ĺ��� 
{
	for(int i=1;i<=r;i++)
	{
		cout <<setw(3)<<rz[i];
	}
	cout <<endl;
	return;
}

void search(int k)//k��ʾҪ�����λ��,n��ʾ��Ԫ��,r��ʾ������������
{
	
	for(int i=1;i<=n;i++)//ѭ��r��������rz���� 
	{
		if(nz[i]==0 && rz[k-1]<i)//�жϵ�ǰλδ��ռ������һλС�ڵ�ǰλ 
		{
			nz[i]=1;//��������Ϊ���� 
			rz[k]=i;//��i����rz����
			if(k==r)
			{
				onputt(r);//������������� 
			}
			else
			{
				search(k+1);//�ݹ� 
			}
			nz[i]=0;//����
			//rz[i]=0;
		}
	}
	return;//�������� 
}

int main()
{
	cin>>n>>r;
	search(1);
	return 0;
} 
