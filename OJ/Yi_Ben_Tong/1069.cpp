/**
 * 1069：乘方计算
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1069
 */
#include <iostream>
using namespace std;
int main()
{
	long a,n,x;
	cin >>a>>n;
	x = a;
	for (long i=1;i<=(n-1);i++)
	{
		//cout <<"i="<<i<<endl;
		x = x*a;
		//cout <<"x="<<x<<endl;
		//cout <<"///////////"<<endl;
	}
	cout <<x<<endl;
}