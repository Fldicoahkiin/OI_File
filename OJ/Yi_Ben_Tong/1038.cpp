/**
 * 1038：苹果和虫子
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1038
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,y,u,l;
	cin >> n >> x >> y;
	u = ceil((double)y/x);
	l = n-u;
	if (l < 0)
	{
		l = 0;
		cout << l <<endl;
	}
	else
	{
		cout << l <<endl;
		return 0;
	}
}