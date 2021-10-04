#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x,n;
	double s;
	cin >>x>>n;
	s = x;
	for(int i=1;i<=n;i++)
	{
		//cout <<"i="<<i<<endl;
		s = s*(1+(0.1*0.01));
		//cout <<"s=";
		//cout <<setprecision(4)<<fixed<<s<<endl;
		//cout <<"//////////"<<endl;
	}
	cout <<setprecision(4)<<fixed<<s<<endl;
	return 0;
}
