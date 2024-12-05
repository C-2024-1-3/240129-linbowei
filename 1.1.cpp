#include <iostream>
#include <windows.h>
int common_div(int , int);
int common_mul(int , int);
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int m , n;
	std::cout << "enter the value of m: ";
	std::cin >> m;
	std::cout << std::endl;
	std::cout << "enter the value of n: ";
	std::cin >> n;
	std::cout << std::endl;
	 
	std::cout << "m与n的最大公约数为" << common_div(m , n) << std::endl;
	std::cout << "m与n的最小公倍数为" << common_mul(m , n) << std::endl;
	
	return 0;
}

int common_div(int a , int b)
{
	while (b != 0 )
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int common_mul(int a , int b)
{
	return (a / common_div(a , b)) * b;
}




