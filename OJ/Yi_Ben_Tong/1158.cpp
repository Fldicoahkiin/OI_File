#include <iostream>
using namespace std;
/*
int main()
{
	int N,s=0;cin >>N;
	for(int i=1;i<=N;i++)
		s=s+i;
	cout <<s;
	return 0;
}
*/
int jn(int a)
{
	if(a==1) return 1;
	return a+jn(a-1);
}
int main()
{
	int n;cin >>n;
	cout <<jn(n);
	return 0; 
}