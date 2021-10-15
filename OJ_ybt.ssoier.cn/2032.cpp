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
			if(n%i==0)//榨干质因数i 
			{
				cout <<i;
				s ++;
				n =n/i;
				if((s>=1)&&(n!=1)) //判断*号 
				{
					cout <<"*"; 
				}
				continue;
			}
			else
			{
				break;//如果该质因数已榨干就i++ 
			}
		}
		if(n==1)//判断n是否已榨干不然就i++ 
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
