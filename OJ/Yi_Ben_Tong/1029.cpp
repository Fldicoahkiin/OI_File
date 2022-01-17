/**
 * 1029：计算浮点数相除的余
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1029
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,r;
	cin >>a>>b;
	cout <<double(a-(int(a/b)*b))<<endl;
	return 0;
}