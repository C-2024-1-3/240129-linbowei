#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	char input;
	std::cout<<"请输入一个字符：";
	std::cin>>input;
	
	if(input>='a'&&input<='z')
	{
		char aa=input-('a'-'A');
		std::cout<<"大写字母："<<aa<<std::endl;
	}
	else
	{
		char bb=input +1 ;
		std::cout<<"后续字符的ASCII码值为"<<static_cast<int>(bb)<<std::endl;
	}
	
	return 0;
}