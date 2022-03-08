/**
 * 1005：地球人口承载力估计
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1005
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("x.in","r",stdin);
    //freopen("x.out","w",stdout);
    double x,a,y,b;
    scanf("%lf %lf %lf %lf", &x, &a, &y, &b);
    printf("%.2f", (y * b - x * a) / (b - a));
    return 0;
}