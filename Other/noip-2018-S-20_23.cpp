#include <iostream>
using namespace std;
string s;
long long magic(int l, int r) {
    long long ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = ans * 4 + s[i] - 'a' + 1;
    }
    return ans;
}
int main( ) {
    cin >> s;
    int len = s.length( );
    int ans = 0;
    for (int l1 = 0; l1 < len; ++l1) {
        for (int r1 = l1; r1 < len; ++r1) {
            bool bo = true;
            for (int l2 = 0; l2 < len; ++l2) {
                for (int r2 = l2; r2 < len; ++r2) {
                    if (magic(l1, r1) == magic(l2, r2) && (l1 != l2 || r1 != r2)) {
                        bo = false;
                    }
                }
            }
            if (bo) {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return main();
}