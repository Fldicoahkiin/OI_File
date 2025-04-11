/**
 * 1003：对齐输出
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1003
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,c;
	cin >>a>>b>>c;
	cout << setiosflags(ios::right);
	cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c <<endl;
	return 0;
}