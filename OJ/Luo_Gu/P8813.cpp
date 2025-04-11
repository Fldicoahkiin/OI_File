#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;cin>>a>>b;
	int temp=pow(a,b);
	if(temp<0)cout<<-1;
	else cout<<temp;
	return 0;
}