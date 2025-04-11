#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 0x3f;
int n;
int s[MAXN];
int f[MAXN][MAXN];

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	
	//求前缀和
	for(int i = 1; i <= n; i++)
	{
		s[i] += s[i-1];
	}
	
	//外面两层枚举所有长度 >= 2 的区间
	for(int len = 2; len <= n; len++)
	{
		for(int i = 1; i + len - 1 <= n; i++)
		{
			int l = i, r = i + len - 1;
			f[l][r] = 10001;//初始化
			
			//枚举 [l, r] 间所有的 k
			for(int k = l; k < r; k++)
			{
				f[l][r] = min(f[l][r], f[l][k] + f[k+1][r] + s[r] - s[l-1]);
			}
		}
	}
	
	cout << f[1][n];
	
	return 0;
}