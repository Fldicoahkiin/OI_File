#include <iostream>
#include <cstdio>

uisng namespace std;

int k;//�������ݵ�����k���������k������
int n;//�Թ��Ĺ�ģ��n��n
char nmap;//һ��n��n�ľ��󣬾����е�Ԫ��Ϊ.����#
int ha,la,hb,lb;//����A���ڵ�ha��, ��la�У�B���ڵ�hb��, ��lb�С�ע�⵽ha,la,hb,lbȫ���Ǵ�0��ʼ�����ġ�

int map[101][101]={0};
int tempmap[101]={0};

int pass=0;//�ж��Ƿ񵽴��յ� 

void fuckin(int i)//����ʱ����ת����ά����Map 
{
	for(int j=0;j<n;j++)// 
	{
		if(tempmap[j]=='#')
			map[i][j]=1;//1��ʾ��Ϊ���߹�����ǽ
	}
	return;
}


void search(int y,int x)
{
	
}

int main()
{
	scanf("%d \n %d",&k,&n);//���� 
	for(int i=1;i<=k;i++)//ѭ��K�� 
	{
		pass=0;
		for(int j=0;j<n;j++)
		{
			gets(tempmap);
			cin >>ha>>la>>ny>>nx; 
			fuckin(j);
		}
		search(ha,la);
		if(pass) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	}
	return 0;
}
