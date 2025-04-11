/**
 * 1331：【例1-2】后缀表达式的值
 * 
 * http://ybt.ssoier.cn:8088/problem_show.php?pid=1331
 */
#include <iostream>
#include <cstdio>
using namespace std;

const int MAXN = 10000;

long long stack[MAXN]={0};
long long top=0;
long long len,temp1,temp2;
char s;

inline void pop()
{
    top--;
}

inline void push(long long value)
{
    stack[++top]=value;
}

int main()
{
    //freopen("1331.in","r",stdin);

    while((s=getchar())!='@')
    {
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
			case ' ':
				push(len);
				len=0;
				break;
			default :
				len=len*10+(s-'0');
				break;
		}
    }
    cout <<stack[top]<<endl;
    //system("Pause");
    return 0;
}