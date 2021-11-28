#include <iostream>
#include <cstdio>

using namespace std;

#define MAXN 1000

void marge(int a[],int l_a,int r_a,int b[],int l_b,int r_b)//合并
{
	int i,c[MAXN];
	int mid_a=a[(l_a+r_a)/2];
	int mid_b=b[(l_b+r_b)/2];
	while(i<=mid_a)
	{

	}
}

void marge_sort(int a[],int l,int r)//分离+合并
{
	
}


int main()
{
	freopen("number.in" ,"r" ,stdin);
//	freopen("number.out" ,"w" ,stdout);
	int n,value[MAXN];
	cin >>n;
	cout <<n<<endl<<"前:";
	for(int i=0;i<n;i++)
	{
		cin >>value[i];
		cout <<value[i]<<" ";
	}cout<<endl<<"后:";

//	marge_sort(value,0,n-1);

	for(int i=0;i<n;i++)
	{
		cout <<value[i]<<" ";
	}
	return 0;
}
