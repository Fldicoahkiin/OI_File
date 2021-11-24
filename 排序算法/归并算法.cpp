#include <iostream>
#include <cstdio>

using namespace std;

#define MAXN 1000

int a[MAXN],r[MAXN];

void msort(int s,int t)
{
	if(s==t) return;
	int mid=(s+t)/2;
	msort(s,mid);
	msort(mid+1,t);
	int i=s,j=mid+1,k=s;
	
	while(i<=mid && j<=t)
	{
		if(a[i]<=a[j])
		{
			r[k]=a[i];k++;i++;
		}
		else
		{
			r[k]=a[j];k++;j++;
		}
	}
	
	while(i<=mid)
	{
		r[k]=a[i];k++;i++;
	} 
	while(j<=t)
	{
		r[k]=a[j];k++;j++;
	}
	for(int i=s;i<=t;i++)
	{
		a[i]=r[i];
	}
}

int main()
{
	freopen("number.in" ,"r" ,stdin);
//	freopen("number.out" ,"w" ,stdout);
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout <<a[i]<<" ";
	}cout<<"-END"<<endl;
	msort(a[0],a[n-1]);
	for(int i=0;i<n;i++)
	{
		cout <<a[i]<<" ";
	}
	return 0;
} 
