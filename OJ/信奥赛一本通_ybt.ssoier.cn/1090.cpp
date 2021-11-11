#include <iostream>

using namespace std;

int m,b,f,k;

int main()
{
	cin >>m>>k;
	while(m!=0)
	{
		b = m%10;
		m = m/10;
		if (b==3)
		{
			f++;
		}
	}
	if(((m%19)==0)&&(f==k))
	{
		cout <<"YES"<<endl; 
	}
	else
	{
		cout <<"NO"<<endl;
	}
	return 0;
}
