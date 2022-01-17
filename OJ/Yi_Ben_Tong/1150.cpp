/**
 * 1150：求正整数2和n之间的完全数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1150
 */
#include <iostream>
using namespace std;

int k(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i == 0)
		{
			s=s+i;
		}
	}
	return s;
} 

int main()
{
	int n;
	cin>>n;
	for(int j=2;j<=n;j++)
	{
		//cout <<k(j)<<endl; 
		if(k(j)==j)
		{
			cout <<j<<endl;
		}
	}

/**
	int n;cin>>n;
	if(n>6 && n<28)
	{
		cout <<6<<endl;
	}
	if(n>28 && n<496)
	{
		cout <<6<<endl;
		cout <<28<<endl;
	}
	if(n>496 && n<8128)
	{
		cout <<6<<endl;
		cout <<28<<endl;
		cout <<496<<endl;
	}
**/

	return 0;
}
