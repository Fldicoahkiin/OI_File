/**
 * 1047：判断能否被3，5，7整除
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1047
 */
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if (n%3!=0 && n%5!=0 && n%7!=0)
    cout<<"n";
    if(n%3 == 0)
	cout<<"3 ";
    if(n%5 == 0)
	cout<<"5 ";
    if(n%7 == 0)
	cout<<"7";
    return 0;
}