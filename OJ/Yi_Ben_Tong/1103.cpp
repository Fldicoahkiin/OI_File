/**
 * 1103：陶陶摘苹果
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1103
 */
#include <iostream>
using namespace std;
int main()
{
	int a[10],h,s=0;
	for(int i=0;i<10;i++)//输入 
	{
		cin >>a[i];
	}
	cin >>h;
	h =h+30;
	for(int j=0;j<10;j++)
	{
		if(a[j]<=h)
		{
			s++;
		}
	}
	cout <<s<<endl;
	return 0;
}