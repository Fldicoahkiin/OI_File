#include <iostream>

using namespace std;

int main()
{
	int n,s=0;
	cin >>n;
	cout <<n<<"=";
	for(int i=2;i<=n;i++)
	{
		while(1)
		{
			if(n%i==0)//ե��������i 
			{
				cout <<i;
				s ++;
				n =n/i;
				if((s>=1)&&(n!=1)) //�ж�*�� 
				{
					cout <<"*"; 
				}
				continue;
			}
			else
			{
				break;//�������������ե�ɾ�i++ 
			}
		}
		if(n==1)//�ж�n�Ƿ���ե�ɲ�Ȼ��i++ 
		{
			break;
		}
		else
		{
			continue;
		}
	}
	return 0;
}
