/**
 * 1064：奥运奖牌计数
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1064
 */
#include <iostream>
using namespace std;
int main()
{
	int n,x;
	int au=0,ag=0,cu=0;
	cin >>n;
	for (int i=1;i<=n;i++)
	{
		cin >>x;
		//cout <<"i="<<i<<endl;
		au = au+x;
		//cout <<"x1:"<<x<<endl;
		cin >>x;
		ag = ag+x;
		//cout <<"x2:"<<x<<endl;
		cin >>x;
		cu = cu+x;
		//cout <<"x3:"<<x<<endl;
		//cout <<"//////////////"<<endl;
	}
	cout <<au<<" "<<ag<<" "<<cu<<" "<<au+ag+cu<<endl;
	return 0;
}