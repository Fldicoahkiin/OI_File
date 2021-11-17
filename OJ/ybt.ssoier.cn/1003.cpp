#include <iostream>
#include <iomanip>
//by HHL
using namespace std;

int main()
{
	int a,b,c;
	cin >>a>>b>>c;
	cout << setiosflags(ios::right);
	cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c <<endl;
	return 0;
}
