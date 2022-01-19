/**
 * 1238：一元三次方程求解
 *
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1238
 * 做法就是一点一点加就tm离谱
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

double a,b,c,d;

/*已弃用，原本思路2021.12.03.15.55
int i=0,t=0;
void fixx(double left,double right)
{
	i++;
	double mid=(left+right)/2;
	mid=round(mid);
	double x=(a*mid*mid*mid)+(b*mid*mid)+(c*mid)+d;
	x=round(x);
	cout <<"mid"<<i<<"="<<mid<<endl;
	cout <<"x"<<i<<"="<<x<<endl;
	if(x<0)
	{
		fixx(mid,0);
	}
	if(x>0)
	{
		fixx(0,mid);
	}
	if(x==0)
	{
		t++;
		cout <<mid<<endl;
	}
	return;
}
*/


int main()
{
	freopen("1238.in","r",stdin);
//	freopen("1238.out","w",stdout);

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
