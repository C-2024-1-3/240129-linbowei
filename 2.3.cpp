#include<iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int x,y,z,C;
	
	std::cout<<"请输入三角形的三边长：";
	std::cin>>x;
	std::cin>>y;
	std::cin>>z;
	
	if((x+y)>z&&(x+z)>y&&(y+z)>x)
	{
	C=x+y+z;
	std::cout<<"三角形周长为："<<C<<std::endl;
	if(x==y||x==z||y==z)
	{   std::cout<<"该三角形为等腰三角形！"<<std::endl;  }
    }
    
    else
    {
    	std::cout<<"三边无法构成三角形"<<std::endl;
	}
	
	return 0;
}