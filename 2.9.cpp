#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	const double price=0.8;
	int bought = 2 , total = bought , cost = bought * price;
	int day = 1;
	
	while(total+bought<=100)
	{
		total += bought;
		cost += bought * price;
		day++;
		bought*=2;
	}
	
	bought /= 2;
	total -= bought;
	total += bought;
	cost -= bought * price;
	cost += bought*price;
	double averagecost=cost / day;
	
	std::cout<<"平均每天花："<<averagecost<<"元"<<std::endl;
	
	return 0;
}