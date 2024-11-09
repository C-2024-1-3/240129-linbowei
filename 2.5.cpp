#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	
	std::cout<<"请输入一行字符：";
	while(std::cin.get(c))
	{
		if(c=='\n'){ break;}
		if(isalpha(c)){ letters++;}
		else if(isspace(c)&&c!='\n'){spaces++;}
		else if (isdigit(c)){ digits++;}
		else{ others++;}
	}
	
	std::cout<<"英文字母个数："<<letters<<std::endl;
	std::cout<<"空格个数："<<spaces<<std::endl;
	std::cout<<"数字字符个数："<<digits<<std::endl;
	std::cout<<"其他字符个数："<<others<<std::endl;
	
	return 0;
}