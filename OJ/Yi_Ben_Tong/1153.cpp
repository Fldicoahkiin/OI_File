#include <iostream>
#include <cmath>
using namespace std;

bool panss(int a)//判断素数
{
	for(int j=2;j<sqrt(a);j++)
	{
		if(a%j==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	for(int s=1;s<100;s++)
	{
		int a=s%10,b=s-a;
		int s2=a*10+b/10;
		if(panss(s)==1 && panss(s2)==1)
		{
			cout <<s<<endl;
		}
	}
	return 0;
}
