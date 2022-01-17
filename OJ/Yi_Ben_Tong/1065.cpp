/**
 * 1065：奇数求和
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1065
 */
#include <iostream>
using namespace std;
int main()
{
	int m,n,s=0;
	cin >>m>>n;
	for (int i=m;i<=n;i++)
	{
		if(i%2 == 1)
		{
			s = s+i;
		}
	}
	cout <<s<<endl;
	return 0;
}