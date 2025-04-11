#include <iostream>
#include <cstdio>

using namespace std;

#define MAXN 10000

void qsort(int a[],int L,int R)
{
	int i=L,j=R,mid=a[(L+R)/2],temp;

	do
	{
		while(a[i]<mid)i++;
		while(a[j]>mid)j--;
		if(i<=j)//交换
		{
			temp=a[i];a[i]=a[j];a[j]=temp;
			i++;j--;
		}
	}while(i<=j);

	/**
	while(i<=j)
	{
		while(a[i]<mid)i++;
		while(a[j]>mid)j--;
		if(i<=j)//交换
		{
			temp=a[i];a[i]=a[j];a[j]=temp;
			i++;j--;
		}
	}*/

	if(L<j)qsort(a,L,j);
	if(i<R)qsort(a,i,R);
}

int main()
{
	freopen("number.in", "r", stdin);
// 	freopen("number.out", "w", stdout);

	int n,value[MAXN];
	cin >>n;
	cout <<n<<"个数排序"<<endl<<"前:";
	for(int i=0;i<n;i++)
	{
		cin >>value[i];
		cout <<value[i]<<" ";
	}cout <<endl<<"后:";

	qsort(value,0,n-1);

	for(int i=0;i<n;i++)
	{
		cout <<value[i]<<" ";
	}
	return 0;
}
