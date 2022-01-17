/**
 * 1099：第n小的质数
 * 
 * Link:http://ybt.ssoier.cn:8088/problem_show.php?pid=1099
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;//第几位即一层循环
	int temp;//存储temp
	int zs=2;
	int f;//判断是非为质数 
	cin >>n;
	for(int i=1;i<=n; ) //第几个质数
	{
		f =1;
		//cout <<"i="<<i<<endl;
		//cout <<"j:";
		//cout <<"zs="<<zs<<endl;
		//cout <<"根号zs="<<sqrt(zs)<<endl;
		for (int j=2;j<=sqrt(zs);j++)//判断是否为质数 
		{
			//cout <<j<<" ";
			if(zs%j == 0)//判断质数是否能被j整除,能整除就不是质数 
			{
				f =0;
				break;
			}
		}
		if(f == 1)
		{
			temp =zs;
			i++;
			//cout <<"temp="<<temp<<endl;
		}
		zs++;
	}
	cout <<temp<<endl;
	return 0;
}