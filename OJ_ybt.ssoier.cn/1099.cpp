#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;//�ڼ�λ��һ��ѭ��
	int temp;//�洢temp
	int zs=2;
	int f;//�ж��Ƿ�Ϊ���� 
	cin >>n;
	for(int i=1;i<=n; ) //�ڼ�������
	{
		f =1;
		//cout <<"i="<<i<<endl;
		//cout <<"j:";
		//cout <<"zs="<<zs<<endl;
		//cout <<"����zs="<<sqrt(zs)<<endl;
		for (int j=2; j<=sqrt(zs);j++)//�ж��Ƿ�Ϊ���� 
		{
			//cout <<j<<" ";
			if(zs%j==0)//�ж������Ƿ��ܱ�j����,�������Ͳ������� 
			{
				f =0;
				break;
			}
		}
		if(f==1)
		{
			temp =zs;
			i++;
			//cout <<"temp="<<temp<<endl;
		}
		zs++;
	}
	cout <<temp<<endl;
	return 0;
}
