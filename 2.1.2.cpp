#include <iostream>

void swap(double &a , double &b)
{
	double temp = b;
	b = a;
	a = temp;
}
int main()
{
	double num[10] = {1.0,7.0,5.0,4.0,8.0,9.0,3.0,2.0,6.0,0.0};
	bool changed;
	do{
		changed = false;
		for (int j = 0;j < 9;j++)
		{
			if(num[j] > num[j+1])
			{
				swap(num[j] , num[j+1]);
				changed = true;
			}
		}
	}while(changed);
	
	for(double n : num){
		std::cout << n << '\t';
	}
	
	return 0;
}