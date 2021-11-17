#include <iostream>

using namespace std;

int main()
{
	int x,y,f;
	char a;
	cin >>y>>x>>a>>f;
	if(f==1)
	{
		for(int i=1;i<=y;i++)
		{
			for(int j=1;j<=x;j++)
			{
				cout <<a;
			}
			cout <<endl;
		}
	}
	if(f==0)
	{
		for(int i=1;i<=y;i++)
		{
			if(i==1)
			{
				for(int j=1;j<=x;j++)
				{
					cout <<a;
				}
			}
			if(i>1&&i<y)
			{
				cout <<a;
				for(int j=1;j<=(x-2);j++)
				{
					cout <<" ";
				}
				cout <<a;
			}
			if(i==y)
			{
				for(int j=1;j<=x;j++)
				{
					cout <<a;
				}	
			}
			cout <<endl;
		}
	}
	return 0;
}
