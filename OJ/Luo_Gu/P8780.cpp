#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, n;
    cin >> a >> b >> n;

    if (n <= 0)
    {
        cout << 0;
        return 0;
    }
    if (a >= n)
    {
        cout << 1;
        return 0;
    }

    ll tmpans = (n - 1) / (5 * a + 2 * b);
    ll ans = tmpans * 7;
    ll i = tmpans * (5 * a + 2 * b);

    ll week = 1;
    while (i < n)
    {
        ans++;
        if (week <= 5)
        {
            i += a;
        }
        else
        {
            i += b;
        }
        week++;
    }
    cout << ans;
    return 0;
}