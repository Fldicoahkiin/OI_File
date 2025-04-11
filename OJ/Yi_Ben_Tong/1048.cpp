/**
 * 1048：有一门课不及格的学生
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1048
 */
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >>a>>b;
	if( (a>=60 && b<60) || (a<60 && b>=60) )
	{
		cout << 1 <<endl;
	}
	else
	{
		cout << 0 <<endl;
	}
	return 0;
}