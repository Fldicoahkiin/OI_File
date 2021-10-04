#include <iostream>

using namespace std;

int main()
{
	int n,x=1,k;
	cin >>n; 
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout <<x;
			x++;
			if(x>9)
				x=0;
		} 
		cout <<endl;
	}
	return 0; 
}
