#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	freopen("文件重定向测试.in","r",stdin);
	freopen("文件重定向测试.out","w",stdout);

    string s;
    cin >>s;
    cout <<s<<endl<<s<<endl<<s<<endl;
    return 0;
}