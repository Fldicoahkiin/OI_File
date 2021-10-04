#include <iostream>
#include <cmath>

using namespace std;

bool panss(int a)//ÅĞ¶ÏÊÇ·ñÎªËØÊı 
{
	for(int j=2;j<=sqrt(a);j++)
		if(a%j==0)
			return 0;
	//cout <<a<<endl;
	return 1;
}

int main()
{
	int n,s=0;cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(panss(i)==1)
			++s;
	}
	cout <<s;
	return 0;
}
