/**
 * 1090：含k个3的数
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1090
 */
#include <iostream>
using namespace std;
int m,b,f,k;
int main()
{
	cin >>m>>k;
	while(m!=0)
	{
		b = m%10;
		m = m/10;
		if (b==3)
		{
			f++;
		}
	}
	if(((m%19)==0) && (f==k))
	{
		cout <<"YES"<<endl; 
	}
	else
	{
		cout <<"NO"<<endl;
	}
	return 0;
}