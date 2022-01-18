/**
 * 1066：满足条件的数累加
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1066
 */
#include <iostream>
using namespace std;
int main()
{
	int k,x,s1=0,s5=0,s10=0;
	cin >>k;
	for (int i=1;i<=k;i++)
	{
		cin >>x;
		//cout <<"i="<<i<<endl;
		//cout <<"x="<<x<<endl;
		if(x==1)
		{
			s1++;
		}
		if(x==5)
		{
			s5++;
		}
		if(x==10)
		{
			s10++;
		}
		//cout <<"//////////////////"<<endl;
	}
	cout <<s1<<endl<<s5<<endl<<s10<<endl;
	return 0;
}