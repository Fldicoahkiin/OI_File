/**
 * 1160：倒序数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1160
 */
#include <iostream>
using namespace std;

long long dao(long long a)
{
	cout <<a%10;
	a/=10;
	if(a>10) a=dao(a);
}

int main()
{
	long long n;cin>>n;
	cout <<dao(n);
	return 0;
}