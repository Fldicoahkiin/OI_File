/**
 * 1151：素数个数
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1151
 */
#include <iostream>
#include <cmath>
using namespace std;

bool panss(int a)//判断是否为素数 
{
	for(int j=2;j<=sqrt(a);j++)
		if(a%j==0)
			return 0;
	//cout <<a<<endl;
	return 1;
}

int main()
{
	int n,s=0;cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(panss(i)==1)
			++s;
	}
	cout <<s;
	return 0;
}