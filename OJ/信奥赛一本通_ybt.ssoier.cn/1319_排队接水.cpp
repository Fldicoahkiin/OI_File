#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;

const int N=1001;

struct list
{
	int value;
	int timelist;
};

list a[N];

int n;
double Time;

bool cmp(const list &a,const list &b)
{
	if(a.value == b.value)
		return a.timelist < b.timelist;
	else
		return a.value < b.value; 
}

int main()
{
//	freopen("1319.in" ,"r",stdin);
	
	cin >>n;
	
	for(int i=1;i<=n;i++)
	{
		cin >>a[i].value;
		a[i].timelist=i;
	}
	sort(a+1,a+n+1,cmp);

	for(int i=1;i<=n;i++)
	{
		cout <<a[i].timelist<<" ";
	}
	
	cout <<endl;
	
	//计算时间 
	for(int i=1;i<=n;i++)
	{
		Time+=(n-i)*a[i].value;
	}
	
	cout <<fixed<<setprecision(2)<<Time/n<<endl;
	
	return 0;
}
