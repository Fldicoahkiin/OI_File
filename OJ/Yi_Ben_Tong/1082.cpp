/**
 * 1082：求小数的某一位
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1082
 */
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    int temp;
 
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
    {
    	//cout <<(double)a/b<<endl;
    	//cout <<"i="<<i<<endl;
        a=a*10;
        //cout <<"a:"<<a<<endl;
        temp=a/b;//temp模拟存储第i位小数
        //cout <<"temp:"<<temp<<endl;
        a=a%b; //提取下一位 
        //cout <<"a2:"<<a<<endl;
        //cout <<"///////////////////////////////"<<endl;
    }
    cout<<temp<<endl;
    return 0;
}

/*
Old
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int a,b,n,temp;
	double y;
	cin >>a>>b>>n;
	y = (a*1.0)/(b*1.0);
	//cout <<fixed<<y<<endl;
	for (int i=0;i<n;i++)
	{
		//cout <<"i="<<i<<endl;
		y = 10*y;
		temp = (int)y%10;
		//cout <<"y=";
		//cout <<fixed<<y<<endl;
		//cout <<"(int)y="<<(int)y<<endl;
		//cout <<"temp="<<(int)y%10<<endl;
	}
	cout <<temp<<endl;
	return 0;
}
*/