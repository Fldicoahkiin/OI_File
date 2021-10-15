#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,c;
	cin >>a>>b>>c;
	int x[3] = {a,b,c};
	for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(x[i]<x[j])
            {
                int temp;
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int k = 0; k < 3; k++)
    {
    	cout<<x[k]<<" ";
    }
    return 0;
}