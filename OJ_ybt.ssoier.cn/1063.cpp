#include <iostream>

using namespace std;

int main()
{
	int n,x,min=10001,max=0;
	cin >>n;
	for (int i=1;i<=n;i++)
	{
		cin >>x;
		//cout <<"i="<<i<<endl;
		if(x>max)
		{
			max = x;
			//cout <<"max修改="<<max<<endl;
		}
		if(x<min)
		{
			min = x;
			//cout <<"min修改="<<min<<endl;
		}
		//cout <<"///////////////循环一轮分割//////////////"<<endl;
	}
	cout <<max-min<<endl;
	return 0;
}
