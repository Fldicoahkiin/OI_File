#include <iostream>

using namespace std;

long a;
long b;

int main()
{
	cout << "��һ����:";
	cin >> a;
	cout << "�ڶ�����:";
	cin >> b;
	cout << "RUN!!!!!!!!!!��������������������" <<endl;
	while(1)
	{
		a = a + b;
		cout << a <<endl;
		b = a + b;
	}
	return 0;
} 
