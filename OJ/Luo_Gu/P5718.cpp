#include<bits/stdc++.h>
int n,ans;
int main()
{
	std::cin>>n;
	std::cin>>ans;
	for(int i=2;i<=n;i++)
	{
		int temp;
		std::cin>>temp;
		ans=std::min(ans,temp);
	}
	std::cout<<ans;
	return 0;
}