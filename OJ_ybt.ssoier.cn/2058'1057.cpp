#include <iostream>

using namespace std;

int main()
{
	int a,b,r;//double 
	char y;
	cin >>a>>b>>y; 
	switch (y)
	{
		case '+' :
			r = a+b;
			cout <<r<<endl;
			break;
		case '-' :
			r = a-b;
			cout <<r<<endl;
			break;
		case '*' :
			r = a*b;
			cout <<r<<endl;
			break;
		case '/' :
			r = a/b;
			if (b == 0)
			{
			cout <<"Divided by zero!"<<endl;
			}
			else
			{
			cout <<r<<endl;
			}
			break;
		default :
			cout <<"Invalid operator!"<<endl;
	}
	return 0;
}
