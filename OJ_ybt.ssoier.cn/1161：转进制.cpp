#include <iostream>
#include <cstring>
using namespace std;

char six[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void zhuan(int a,int b)
{
	if(a==0) return;
	zhuan(a/b,b);
	cout<<six[a%b];
	return;
}

int main()
{
	int x,m;cin >>x>>m;
	zhuan(x,m);
	return 0;
}
