#include <iostream>
#include <cmath>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double a;
	std::cout<<"请输入一个正数：";
	std::cin>>a;
	
	if(std::cin.fail()||a<0)
	{
		std::cout<<"输入错误！请输入一个非负数。\n";
		return 1;
	}
	
	double xn=a;
	double xn_plus_1=0.0;
	do 
	{
		xn_plus_1=0.5*(xn+a/xn);
		xn=xn_plus_1;
	}while(fabs(xn_plus_1-xn)>=1e-5);
	
	std::cout<<"计算得到的平方根是："<< xn <<"\n";
	
	return 0;
}