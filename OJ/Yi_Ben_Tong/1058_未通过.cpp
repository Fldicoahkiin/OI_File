/**
 * 1058：求一元二次方程
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1058
 * 未通过
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x1,x2,a,b,c,t;
	cin >>a>>b>>c;
	t = b*b-4*a*c;
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	if (t>=0)
	{
		if (t==0)
		{
			cout <<"x1=x2=";
			cout <<setprecision(5)<<fixed<<x1<<endl;
		}
		else
		{
			cout <<"x1=";
			double f = (x1>x2) ? x2:x1;
			cout <<setprecision(5)<<fixed<<f;
			cout <<";x2=";
			cout <<setprecision(5)<<fixed<<x2<<endl;
		}
	}
	else
	{
		cout <<"No answer!"<<endl; 
	}
	return 0;
}