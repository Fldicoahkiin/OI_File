/**
 * 1071：菲波那契数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1071
 */
#include <iostream>
using namespace std;
int main()
{
	int c1=1,c2=1,d = 2,k;
	cin >>k;
	for ( ;d<k;d=(d+2))
	{
		c1 = c1+c2;
		c2 = c1+c2;
	}
	if((k%2)==0)
	{
		cout <<c2<<endl; 
	}
	else
	{
		cout <<c1<<endl;
	}
	return 0;
}