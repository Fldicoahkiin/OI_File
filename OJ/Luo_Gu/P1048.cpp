/**
 * P1048 [NOIP2005 普及组] 采药
 *
 * https://www.luogu.com.cn/problem/P1048
 */
#include <iostream>
#include <cstring>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::max;

const int MAXN = 1001;
const double INF = 10000;

int T,M;
int timecost[MAXN];
int worth[MAXN];
int mem[MAXN][MAXN];
int ret[MAXN];

int dfs(int pos, int tleft) {

}

int main()
{
    freopen("P1048.in","r",stdin);
/*折磨自己
    scanf("%d %d",&T,&M);
	for(int i=1;i<=M;i++)
	{
		scanf("%d %d",&Time[i],&worth[i]);
	}
	*/
	cin>>T>>M;
	for(int i=1;i<=M;i++)
	{
		cin >>timecost[i]>>worth[i];
		cout <<timecost[i]<<' '<<worth[i]<<endl;
	}

	cout<<dfs(1,T)<<endl;
    return 0;
}