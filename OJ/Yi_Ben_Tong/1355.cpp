/**
 * 1355：字符串匹配问题(strs)
 *
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1355
 * 未写完
 * 有问题
 */
#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 1000;

int stack[MAXN];
int top=0;

inline void pop()
{
	top--;
}

inline void push(int n)
{
	stack[top++]=n;
}

char a;

int main()
{
	freopen("1355.in","r",stdin);
	
	int n;
	scanf("%d",&n,'\n');
	
	for(int i=0;i<n;i++)
	{
		while(1)
		{
			a=getchar();
			if(a=='\n') break;
			switch (a) {
			case '(':push(1);break;
			case '[':push(2);break;
			case '<':push(3);break;
			case '{':push(4);break;
			case ')':push(-1);break;
			case ']':push(-2);break;
			case '>':push(-3);break;
			case '}':push(-4);break;
			}
			if(stack[top]+stack[top-1]==0)
			{
				stack[top]=stack[top-1]=0;
				pop();
			}
		}
		if(top==0 && stack[0]==0 && i!=0)
		{
			cout <<"YES"<<endl;
		}
		else
		{
			cout <<"NO"<<endl;
		} 
	}
	return 0;
}
