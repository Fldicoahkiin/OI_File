#include <iostream>

using namespace std;

int n,s;
int ans[20]={0};

void output()
{
	cout <<n<<'=';
	cout <<ans[1]; 
	for(int i=2;i<=n;i++)
	{
		if(ans[i]!=0)
		{
				cout <<'+'<<ans[i];
		}
	}
	cout <<endl;

	return;
}


void search(int n,int k)
{
	
	for(int i=1;i<=n;i++)
	{
		if(i>=ans[k-1])
		{
			ans[k]=i;
			if(i>=ans[k-1])
			{
				ans[k]=i;
			}
			if(n==i && k!=1)
			{
				output();
			}
			if(n-i>=i)
			{
				search(n-i,k+1);
			}
		}
	}
	ans[k]=0;
}

int main()
{
	cin>>n;
	search(n,1);
	return 0;
}
