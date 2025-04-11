//最大公约数 
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a < b) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

int x, y;

int main()
{ 
    cin >> x >> y;
    cout << gcd(x, y);    
    return 0;
}
