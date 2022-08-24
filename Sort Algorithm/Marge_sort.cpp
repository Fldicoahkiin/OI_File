#include <iostream>
#include <iomanip>
#include <cstdio>

#define MAXN 1000

using namespace std;

void merge(int a[],int left,int mid,int right)//合并
{
	int Temp[MAXN];
	int i=left,j=mid+1;
	int k=0;

	while(i<=mid && j<=right)
	{
		if(a[i]<=a[j])
		{
			Temp[k++]=a[i++];
		}
		else
		{
			Temp[k++]=a[j++];
		}
	}

	while(i<=mid)
		Temp[k++]=a[i++];

	while(j<=right)
		Temp[k++]=a[j++];

	for(int i=0;i<k;i++)
		a[i+left]=Temp[i];

	return;
}
void merge_sort(int a[],int left,int right)//分离+合并(套用merge)
{
	int mid=(left+right)/2;

	if(left<mid)//合并左边
		merge_sort(a,left,mid);

	if(mid+1<right)//合并右边
		merge_sort(a,mid+1,right);

	merge(a,left,mid,right);//合并左右两边

	return;
}
int main()
{
	freopen("number.in","r",stdin);

	int n;int value[MAXN];

	cin>>n;cout<<"n="<<n<<endl<<"前:";
	for(int i=1;i<=n;i++)
	{
		cin>>value[i];
		cout<<setw(3)<<value[i];
	}cout <<endl<<"后:";

	merge_sort(value,1,n);

	for(int i=1;i<=n;i++)
	{
		cout<<setw(3)<<value[i];
	}
	return 0;
}
