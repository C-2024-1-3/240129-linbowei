#include <iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double F,C;
	
	std::cout<<"请输入华氏度："<<std::endl;
	std::cin>>F;
	
	C=(F-32)*(5.0/9.0);
	
	std::cout<<"当前摄氏度为："<<C<<std::endl;
	
	return 0;
}