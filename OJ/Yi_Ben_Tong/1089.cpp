/**
 * 1089：数字反转
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1089
 */
#include <iostream>
using namespace std;
int a,b;
int main()
{
	cin >>a;
	if(a<0)
	{
		a = -a;
		cout <<"-";
	}
	b = a%10;
	while(b==0)
	{
		a = a/10;
		b = a%10;
	}
	while(a!=0)
	{
		b = a%10;
		cout <<b;
		a = a/10;
	}
	return 0;
}