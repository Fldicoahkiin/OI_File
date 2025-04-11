#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed solveA()
{
    ll n = 50;
    ll skip = 7;
    ll ansA = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (i < skip && j < skip)
                continue;
            ansA++;
        }
    }
    cout << ansA;
    return 0;
}

signed solveB()
{
    ll a = 343720;
    ll b = 233333;
    for (ll i = 1; i <= 1e4; i++)
    {
        for (ll j = 1; j <= 1e4; j++)
        {
            ll x = i * a * 2;
            ll y = j * b * 2;
            if (x * 17 == y * 15)
            {
                cout << fixed << setprecision(2) << sqrt((double)(x * x + y * y));
                return 0;
            }
        }
    }
    return -1;
}

int main()
{
    string ans[] = {
        "1204",          // 双引号中替换为 A 题的答案
        "1100325199.77", // 双引号中替换为 B 题的答案
    };
    char T;
    cin >> T;
    cout << ans[T - 'A'] << endl;
    return 0;

    /*
    char T;
    cin >> T;
    if (T == 'A')
    {
        solveA();
    }
    else if (T == 'B')
    {
        solveB();
    }
    return -1;
    */
}