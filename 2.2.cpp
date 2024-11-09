#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double x,y;
	std::cout<<"请输入数值："<<std::endl;
	std::cin>>x;
	if(x>0&&x<1)
	{
		y=3-2*x;
		std::cout<<"输出"<<y<<std::endl;
	}
	else if(x>=1&&x<5)
	{
		y=2/(4*x)+1;
		std::cout<<"输出"<<y<<std::endl;
	}
	if(x>=5&&x<10)
	{
		y=x*x;
		std::cout<<"输出"<<y<<std::endl;
	}
	else
	{
	std::cout<<"不在取值范围内！"<<std::endl;	
	}
	return 0;
}