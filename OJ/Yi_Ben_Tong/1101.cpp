/**
 * 1011：甲流疫情死亡率
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1011
 */
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,s=0;
	cin >>a>>b>>c;
	for(int x=0;x<=c/a;x++)//x
	{
		//cout <<"x="<<x<<endl;
		for(int y=0;y<=c/b;y++)//y
		{
			if((x*a)+(b*y) == c)
			s++;
		}
	}
	cout <<s<<endl;
	return 0;
}