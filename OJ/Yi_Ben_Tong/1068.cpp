/**
 * 1068：与指定数字相同的数的个数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1068
 */
#include <iostream>
using namespace std;
int main()
{
	int n,m,x,s=0;
	cin >>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin >>x;
		if(x==m)
		{
			s++;
		}
	}
	cout <<s<<endl;
	return 0;
}