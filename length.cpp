#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << "请输入你的长度:"; 
    cin >> a;
    if ( a < 20 )
    {
    	cout << "我的都有" << a*10 << "cm，" << "你真短" << endl;
    }
    else
    {
    	cout << "NB" << endl;
    }
    return 0;
}