#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
    int row=5;
    
    for(int i=1;i<=row;i++)
    {
		for(int k=1; k<=i;k++)
		{
			std::cout<<"*";
		}
	std::cout<<std::endl;
	}
	return 0;
}