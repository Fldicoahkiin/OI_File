#include <iostream>

using namespace std;

int jc(int a)
{
	int r = 1;
	for(int j=1;j<=a;j++)
	{
		//cout <<"/////jc////"<<endl;
		//cout <<"j="<<j<<endl;
		r = r*j;
		//cout <<"r="<<r<<endl;
		//cout <<"///jc结束//"<<endl;
	}
	return r;
}

int main()
{
	int n,x=0;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		//cout <<"i="<<i<<endl;
		x = x+jc(i);		
		//cout <<"xxxxxxxxxxxxxx="<<x<<endl;
	}
	cout <<x<<endl;
	return 0;
}
