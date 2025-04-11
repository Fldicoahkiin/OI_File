/**
 * 1086：角谷猜想
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1086
 */
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >>a;
	while(a!=1)
	{
		if(a%2==1)
		{
			cout <<a<<"*3+1=";
			a = (a*3)+1;
			cout <<a<<endl;
		}
		else
		{
			cout <<a<<"/2=";
			a = a/2;
			cout <<a<<endl;
		}
	}
	cout <<"End"<<endl;
	return 0;
}