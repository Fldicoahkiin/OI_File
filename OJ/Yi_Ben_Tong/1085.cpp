/**
 * 1085：球弹跳高度的计算
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1085
 */
#include <iostream>
using namespace std;
int main()
{
	double h,s=0;
	cin >>h;
	s = h;
	for(int k=1;k<=9;k++)
	{
		h = h/2;
		s = s+(h*2);
	}
	cout <<s<<endl;
	cout <<h/2<<endl;
	return 0;
}