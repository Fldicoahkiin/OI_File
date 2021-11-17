#include <iostream>
#include <cmath>
//by HHL
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
