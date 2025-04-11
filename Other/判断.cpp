#include <iostream>

using namespace std;

int x;//提取数
int a;//个 
int b;//十 
int c;//百 
int d;//千 
 	
int main()
{
	cout << "by:hhl\n" << "本程序仅支持正数千位以内" << "\n请输入你要提取的数："; 
	cin >> x;
	if (x < 0)//负数判断 
	{
		cout << "此数不是正数，请重新输入" <<endl;
		return main();
	}
	if (x >= 0 && x<10)//个位提取 
	{
		cout << "此数为个位数：" << x <<endl;
	}
	if (x >= 10 && x<100)//十位提取 
	{
		a = x%10;
		b = x/10;
		cout <<"此数为十位数\n" << "十位数为：" << b << "\n个位数为：" << a <<endl; 
	}
	if (x >= 100 && x<1000)//百位提取 
	{
		a = x%10;
		b = x/10%10;
		c = x/100;
		cout <<"此数为百位数\n" << "百位数为:" << c << "\n十位数为:" << b << "\n个位数为:" << a <<endl; 
	}
	if (x >=1000 && x<10000)//千位提取
	{
		a = x%10;
		b = x/10%10;
		c = x/100%10;	
		d = x/1000;
		cout <<"此数为千位数\n" << "千位数为:" << d << "\n百位数为:" << c << "\n十位数为:" << b << "\n个位数为:" << a <<endl;
	} 
	return 0; 
}
