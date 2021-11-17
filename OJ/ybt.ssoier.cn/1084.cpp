#include <iostream>

using namespace std;

int main()
{
	int a,y,b,c;
	cin >>a>>b;
	y = a;
	for(int i = 1;i<b;i++)
	{
		a = a*y;
		if(a>1000)
		{
			c = a/1000;
			a = a-(1000*c);
		}
	}
	if((a>10)&&(a<100))
	{
		cout <<"0"<<a<<endl;
	}
	if((a>0)&&(a<10))
	{
		cout <<"00"<<a<<endl;
	}
	if((a>100)&&(a<1000))
	{
		cout <<a<<endl;
	}
	return 0;
}
