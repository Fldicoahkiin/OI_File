#include <iostream>

using namespace std;

int a,b;

int main()
{
	cin >>a;
	if(a<0)
	{
		a = -a;
		cout <<"-";
	}
	b = a%10;
	while(b==0)
	{
		a = a/10;
		b = a%10;
	}
	while(a!=0)
	{
		b = a%10;
		cout <<b;
		a = a/10;
	}
	return 0;
}
