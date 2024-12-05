#include<iostream>
#include<vector>

int main(){
	const int numlockers = 100;
	std::vector<bool> lockers(numlockers , false);
	
	for(int student = 1;student <= 100;student++)
	{
		for(int locker = student;locker <= numlockers;locker += student)
		{
			lockers[locker - 1] = !lockers[locker - 1];
		}
	}
	
	for(int i = 0;i <= 99;i++)
	{
		if(lockers[i]){
			std::cout << i+1;
			std::cout << " ";
		}
	}
	
	return 0;
}