/**
 * 1087：级数求和
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1087
 */
#include <iostream>
using namespace std;

/*
double S(int a)
{
	double s = 0;
	for (double i=1;i<=a;i++)
	{
		cout <<"/////////"<<endl;
		cout <<"i="<<i<<endl;
		s = s+1/i;
		cout <<"s="<<s<<endl;
	}
	return s;
}
*/

int main()
{
	int k,n=1;
	cin >>k;
	double g=1;
	while(g<=k)
	{
		n++;
		g = g+1.0/n;
		//cout <<"n="<<n<<endl;
		//cout <<"g="<<g<<endl;
	}
	cout <<n<<endl;
	return 0;
}