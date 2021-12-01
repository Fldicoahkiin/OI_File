/**
 * copy by classmates
 */
#include <iostream>
#include <cstdio>

#define MAXN 1000

using namespace std;

void merge(int a[],int l,int mid,int r)//合并
{
	int t[MAXN],k=l;
	int i=l,j=mid+1;
	while(i<=mid && j<=r)
	{
		if(a[i]<=a[j])
		{
			t[k]=a[i];
			i++;
		}
		else
		{
			t[k]=a[j];
			j++;
		}
		k++;
	}
    while(i<=mid)
	{
	    t[k]=a[i];i++,k++;
	}
	while(j<=r)
	{
		t[k]=a[j];j++,k++;
	}
	for(int i=1;i<=r;i++)
	{
		a[i]=t[i];
	}
	return;
}
void merge_sort(int a[],int l,int r)//分离+合并(套用merge)
{
	int mid=(l+r)/2;
	if(l<mid) merge_sort(a,l,mid);
	if(mid+1<r) merge_sort(a,mid+1,r);
	merge(a,l,mid,r);
	return;
}
int main()
{
    freopen("number.in","r",stdin);
	int n;int value[MAXN];
	cin>>n;
	cout <<"前:";
	for(int i=1;i<=n;i++)
	{
		cin>>value[i];
		cout<<value[i]<<' ';
	}cout <<endl<<"后:";
	
	merge_sort(value,1,n);
	
	
	for(int i=1;i<=n;i++)
	{
		cout<<value[i]<<' ';
	}
	return 0;
}
