#include <cstdio>
int n, d[100];
bool v[100];
int main( ) {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", d + i);
        v[i] = false;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            for (int j = i; !v[j]; j = d[j]) {
                v[j] = true;
            }
            ++cnt;
        }
    }
    printf("%d\n", cnt);
    return 0;
}