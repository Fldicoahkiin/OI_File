/**
 * 2058：【例3.10】简单计算器
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2058
 */

/**
 * 1057：简单计算器
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1057
 */
#include <iostream>
using namespace std;
int main()
{
	int a,b,r;//double 
	char y;
	cin >>a>>b>>y; 
	switch (y)
	{
		case '+' :
			r = a+b;
			cout <<r<<endl;
			break;
		case '-' :
			r = a-b;
			cout <<r<<endl;
			break;
		case '*' :
			r = a*b;
			cout <<r<<endl;
			break;
		case '/' :
			r = a/b;
			if (b == 0)
			{
			cout <<"Divided by zero!"<<endl;
			}
			else
			{
			cout <<r<<endl;
			}
			break;
		default :
			cout <<"Invalid operator!"<<endl;
	}
	return 0;
}