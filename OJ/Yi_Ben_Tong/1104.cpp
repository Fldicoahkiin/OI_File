/**
 * 1104：计算书费
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1104
 */
#include <iostream>
using namespace std;

double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
double s=0,n;

int main()
{
	for(int i=0;i<10;i++)
	{
		cin >>n;
		s = s+a[i]*n;
	}
	cout <<s<<endl;
	return 0;
}