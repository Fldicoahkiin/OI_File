#include <iostream>
#include <cstring>
//#include <cstdio>

using namespace std;

int main()
{
	char ori[500];
	char a,b;
	
	gets(ori);//输入

	cin >>a>>b;

	int s;
	s=strlen(ori);
	
	for(int i=0;i<s;i++)
	{
		if(ori[i]==a) 
			cout <<b;
		else
			cout <<ori[i];
	}
	return 0;
}
