#include <iostream>

using namespace std;

long a;
long b;

int main()
{
	cout << "第一个数:";
	cin >> a;
	cout << "第二个数:";
	cin >> b;
	cout << "RUN!!!!!!!!!!！！！！！！！！！！" <<endl;
	while(1)
	{
		a = a + b;
		cout << a <<endl;
		b = a + b;
	}
	return 0;
} 
