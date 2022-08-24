#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int ans=0;

void dfs(int x)
	{
		++ans;
		if(x<=1)return;
		dfs(x/3);
		if(x/3+1<x) dfs(x/3+1);
		if(x/3+2<x) dfs(x/3+2);
	}

int main()
{
	
	int xx=10;
	dfs(xx);

	cout <<ans<<endl;
}