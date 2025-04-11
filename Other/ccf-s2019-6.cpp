#include <iostream>

using namespace std;

int m[7]={0,1,1,2,4,8,8};

bool used[10000];

int main()
{
	int ans=0;
	
    for(int a=1;a<=6;a++)
    for(int b=1;b<=6;b++)
    for(int c=1;c<=6;c++)
    for(int d=1;d<=6;d++)
    {
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            if(used[m[a]*1000+m[b]*100+m[c]*10+m[d]]==0)
            {
                used[m[a]*1000+m[b]*100+m[c]*10+m[d]]=1;
                ans++;
            } 
    }
    
    cout<<ans;
    
	return 0;
} 
