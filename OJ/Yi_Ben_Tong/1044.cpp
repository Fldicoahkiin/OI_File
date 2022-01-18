/**
 * 1044：判断是否为两位数
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1044
 */
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >>a;
	if ((a>=10)&&(a<=99))
	{
		cout <<"1"<<endl; 
	}
	else
	{
		cout <<"0" <<endl;
	}
	return 0;
}