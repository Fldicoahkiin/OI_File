/**
 * 2046：【例5.15】替换字母
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=2046
 * 有问题
 */
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char ori[500];
	char a,b;
	
	cin.getline(ori,20,'/');//输入

	cin >>a>>b;

	int s;
	s=strlen(ori);
	
	for(int i=0;i<s;i++)
	{
		if(ori[i]==a) 
			cout <<b;
		else
			cout <<ori[i];
	}
	return 0;
}