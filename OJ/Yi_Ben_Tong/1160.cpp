#include <iostream>
using namespace std;
long long dao(long long a)
{
	cout <<a%10;
	a/=10;
	if(a>10) a=dao(a);
}
int main()
{
	long long n;cin>>n;
	cout <<dao(n);
	return 0;
}
