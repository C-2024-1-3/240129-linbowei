#include<iostream>
#include<windows.h>	
#include<algorithm>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int a,b,x,y;
	cout<<"请输入两个正整数：";
	cin >> a >>b;
	x = min(a,b);
	while(x>1 && (a%x!=0 || b%x!=0))
        { x--; }
	cout <<"a,b的最大公约数为"<< x <<endl;
	
	y=max(a,b);
	while(y%a!=0||y%b!=0)
	    { y++; }
	cout<<"a,b的最小公倍数为"<<y<<endl;
	return 0;
}
