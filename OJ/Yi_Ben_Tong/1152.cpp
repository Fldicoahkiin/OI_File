#include <iostream>
#include <iomanip>
using namespace std;

int MAXX(double x,double y,double z)
{
	x = (y>x) ? y :x;
	x = (z>x) ? z :x;
	return x;
}

int main()
{
	double a,b,c,m;
	cin >>a>>b>>c;
	//cout <<MAXX(a,b,c)<<MAXX(a+b,b,c)<<MAXX(a,b,b+c)<<endl;
	m = 1.0*MAXX(a,b,c)/(MAXX(a+b,b,c)*MAXX(a,b,b+c));
	cout <<setprecision(3)<<fixed<<m;
	return 0; 
}
