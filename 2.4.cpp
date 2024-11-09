#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	double num1,num2;
	char operation;
	
	std::cout<<"请输入第一个数字：";
	std::cin>>num1;
	std::cout<<"请输入一个运算符";
	std::cin>>operation;
	std::cout<<"请输入第二个数字：";
    std::cin>>num2;
    
    double result=0;
    bool valid=true;
    
    switch (operation)
	{
		case '+':
			result=num1+num2;
			break;
		
		case '-':
			result=num1-num2;
			break;
		
		case '*':
			result=num1*num2;
			break;
		
		case '/':
			if(num2==0){ std::cout<<"除数不能为零！"<<std::endl;   valid=false; }
			else{ result=num1/num2; }
			break;
		
		case '%':
			if(num2==0){ std::cout<<"除数不能为零！"<<std::endl; valid=false;}
			else{ result=static_cast<int>(num1)%static_cast<int>(num2);}
			break;
			
		default:
			std::cout<<"非法运算符"<<std::endl;
			valid=false;
			break;
	}
  
    if(valid)
	{
		std::cout<<"运算结果是："<<result<<std::endl;
	}  
	return 0;
}