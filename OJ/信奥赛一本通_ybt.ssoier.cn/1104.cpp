#include <iostream>

using namespace std;

int main()
{
	double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double s=0,n;
	for(int i=0;i<10;i++)
	{
		cin >>n;
		s = s+a[i]*n;
	}
	cout <<s<<endl;
	return 0;
}
