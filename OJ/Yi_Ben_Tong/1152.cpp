/**
 * 1152：最大数max(x,y,z)
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1152
 */
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