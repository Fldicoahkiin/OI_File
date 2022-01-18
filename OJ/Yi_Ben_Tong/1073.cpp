/**
 * 1073：救援
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1073
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,p=0;
	double z,x,y,s1,s2=0;
	cin >>n;
	for (int i=1;i<=n;i++)
	{
		//cout <<"//////////"<<endl;
		//cout <<"i="<<i<<endl; 
		cin >>z;
		x = z;
		cin >>z;
		y = z;
		s1 = sqrt(x*x+y*y);
		//cout <<"s1="<<s1<<endl;
		s2 = s2+s1*2;
		cin >>z;
		p = p+z;
		//cout <<"//////////"<<endl;
	}
	cout <<ceil(s2/50+p*1.5)<<endl;
	return 0;
}