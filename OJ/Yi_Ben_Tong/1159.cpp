/**
 * 1159：斐波那契数列
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1159
 */
#include <iostream>
using namespace std;

int fb[10000]={0}; 

int fuck(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
}

int main()
{
	int n;cin >>n;
	cout <<fuck(n);
	return 0; 
}