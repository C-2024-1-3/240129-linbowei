#include <iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int num[10];
	num[9] = 1;
	for(int i = 8;i >= 0;i--)
	{
		num[i] = (num[i+1] + 1) * 2;
	}
	std::cout << "第一天猴子共摘" << num[0] << "个桃子" << std::endl;
	
	return 0;
}