/**
 * 1824：【01NOIP提高组】一元三次方程求解
 * 同
 * 1238：一元三次方程求解
 *
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1824
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

double a,b,c,d;

int main()
{
	//freopen("1824.in","r",stdin);
	//freopen("1824.out","w",stdout);
	
	cin>>a>>b>>c>>d;
	//	cout <<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d<<endl;
	
	double x,ans;
	cout.precision(2);
	cout.setf(ios::fixed);
	
	for(int i=-10000;i<=10000;x=(++i)/100.0)
	{
		ans=a*x*x*x+b*x*x+c*x+d;
		if(ans>=-0.01 && ans<=0.01)
		{
			cout <<x<<" ";
		}
	}
	
	return 0;
}
