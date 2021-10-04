#include <iostream>

using namespace std;

int main()
{
	long a,n,x;
	cin >>a>>n;
	x = a;
	for (long i=1;i<=(n-1);i++)
	{
		//cout <<"i="<<i<<endl;
		x = x*a;
		//cout <<"x="<<x<<endl;
		//cout <<"///////////"<<endl;
	}
	cout <<x<<endl;
}
