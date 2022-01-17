/**
 * 1066：满足条件的数累加
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1066
 */
#include <iostream>
using namespace std;
int main()
{
	int m,n,s=0;
	cin >>m>>n;
	for (int i=m;i<=n;i++)
	{
		if(i%17==0)
		{
			s = s+i;
		}
	}
	cout <<s<<endl;
	return 0;
}