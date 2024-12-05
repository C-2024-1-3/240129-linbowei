#include <iostream>
#include <iomanip>
#include "mytemperature.h"

int main()
{
	std::cout << std::setprecision(4);
	std::cout << "Celsius\t Fahrenheit\t |\t Fahrenheit\t Celsius\t" << std::endl;
	
	
	double fah = 120.0;
	for(double cel = 40.0 ; cel >= 31.0 ; cel--)
	{
		if(fah <30.0){
			break;
		}
		std::cout << cel << '\t';
		std::cout << celsius_to_fah(cel) << '\t';
		std::cout << "|\t";
		std::cout << fah << '\t';
		std::cout << fahrenheit_to_cels(fah) << '\t';
		
		fah -= 10.0;
		std::cout << std::endl;
	}
	
	return 0;
}