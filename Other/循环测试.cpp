#include <iostream>

using namespace std;

int main()
{
	for(int x = 0; ;x++)
		if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122)))
		{
			cout << (char)x;
		}
	return 0;
}
