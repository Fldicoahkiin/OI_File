#include <iostream>

using namespace std;

	
int main()
{
	int n,x,max=-1;
	cin >>n;
	for (int i = 1;i<=n;i++)
	{
		cin >>x;
		//cout <<"i:"<<i<<endl;
		//cout <<"x:"<<x<<endl;
		//cout <<"max:"<<max<<endl;
		if(x>max)
		{
			max = x;
			//cout <<"maxºó:"<<max<<endl;
		}
	}
	cout <<max<<endl;
    return 0;
}
