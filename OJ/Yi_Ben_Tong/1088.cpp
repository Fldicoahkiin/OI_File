/**
 * 1088：分离整数的各个数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1088
 */
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >>a;
	while(a>0)
	{
		b = a%10;
		cout <<b<<" ";
		a = a/10;
	}
	return 0;
}