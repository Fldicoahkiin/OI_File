#include<iostream>
using namespace std;
int judge(int n);
 
int main()
{
    long int i;
 
    for(i=1;; i++) //��1��ʼö��
    {
        if( i==judge(judge(i)) && i!=judge(i) )//num(num(i))��Ϊi����֮�͵�����֮��
        {
            cout<<i<<" "<<judge(i)<<endl;//i��judge(i)������������һ���׺���
            break;//�˳�
        }
    }
    return 0;
}
 
int judge(int n)
{
    long int sum=0;
    long int i;
 
    for(i=1; i<n/2+1; i++)
        if(n%i==0)
            sum+=i;
    return sum;
}
