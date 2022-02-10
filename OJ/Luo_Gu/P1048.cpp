/**
 * P1048 [NOIP2005 普及组] 采药
 * 
 * https://www.luogu.com.cn/problem/P1048
 */
#include <iostream>
#include <cstdio>
using namespace std;

int T,M;
int Time[1001],worth[101];

int main()
{
    freopen("P1048.in","r",stdin);

    scanf("%d %d",&T,&M);
    for(int i=1;i<=M;i++)
    {
        scanf("%d %d",&Time[i],&worth[i]);
    }
    
    return 0;
}