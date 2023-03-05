#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100001;

int a[MAXN];
int b[MAXN];
long long ans1,ans2;
long long z,f;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
		b[i]=a[i]-a[i-1];
		if(b[i]>0 && i>1) z+=b[i];//cout<<"z:"<<z<<endl;
		if(b[i]<0 && i>1) f+=b[i];//cout<<"f:"<<f<<endl;
		ans1=max(abs(z),abs(f));
		ans2=abs(abs(z)-abs(f))+1;
	}
	cout<<ans1<<endl<<ans2;
	return 0;
}