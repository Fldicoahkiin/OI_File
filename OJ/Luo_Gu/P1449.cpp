/**
 * P1449 后缀表达式
 *
 * https://www.luogu.com.cn/problem/P1449
 */
#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 1000;

long long stack[MAXN];
long long top=0;

//出栈
inline void pop()
{
	top--;
}

//入栈
inline void push(int n)
{
	stack[top++]=n;
}

char s;
long long len;
int temp1,temp2;

int main()
{
	freopen("P1449.in","r",stdin);
	
	while(s!='@')
	{
		s=getchar();
		switch(s)
		{
			case '+':
				temp2=stack[top];
				pop();
				temp1=stack[top];
				pop();
				push(temp1+temp2);
				break;
			case '-':
				temp2=stack[top];
				pop();
				temp1=stack[top];
				pop();
				push(temp1-temp2);
				break;
			case '*':
				temp2=stack[top];
				pop();
				temp1=stack[top];
				pop();
				push(temp1*temp2);
				break;
			case '/':
				temp2=stack[top];
				pop();
				temp1=stack[top];
				pop();
				push(temp1/temp2);
				break;
			case '.':
				push(len);
				len=0;
				break;
			default :
				len=len*10+(s-'0');
				break;
		}
		/**
		while(s>='0' && s<='9')
		{
			temp1=temp1*10+(s-'0');
		}
		if(s>='0' && s<='9')
		{
			push(temp1);
		}
		else if(s=='+')
		{
			pop();
			temp2=stack[top];
			pop();
			temp1=stack[top];
		}
		else if(s=='-')
		{
			pop();
			temp2=stack[top];
			pop();
			temp1=stack[top];
			push(temp1-temp2);
		}
		else if(s=='*')
		{
			pop();
			temp2=stack[top];
			pop();
			temp1=stack[top];
			push(temp1*temp2);
		}
		else if(s=='/')
		{
			pop();
			temp2=stack[top];
			pop();
			temp1=stack[top];
			push(temp1/temp2);
		}
		*/
	}
	cout<<stack[top];
	return 0;
}
