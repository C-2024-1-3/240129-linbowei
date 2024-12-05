#include<iostream>
#include<cctype>
#include<cstdlib>
int parsehex(const char *const hexString){
	int sum = 0;
	int multiplier = 1;
	
	for(int i = strlen(hexString) - 1;i >= 0;i--){
		char hexDigit = hexString[i];
		
		if(hexDigit >= '0' && hexDigit <= '9'){
			sum += (hexDigit - '0') * multiplier;
		}
		else if(std::isxdigit(hexDigit)){
			sum += (std::tolower(hexDigit) - 'a' + 10) * multiplier;
		}
		multiplier *= 16;
	}
	
	return sum;
}

int main(){
	char hexString[100];
	std::cin.getline(hexString , 100);
	std::cout << parsehex(hexString) << std::endl;
	
	return 0;
}