//”–Œ Ã‚ 
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char a[2501];
int main()
{
	char temp;
	int k,s,t=1;
	scanf("%d ", &k);
	gets(a);
	s = strlen(a);
	for(int i=0;i<s;i++)
	{
		if(t<=k && a[i+1]==a[i])
		{
			temp = a[i];
			++t;
			if(t==k)
				break;
		}
		else
			t=1;
	}
	if(t==k)
		cout <<temp;
	else
		cout <<"NO";
}
