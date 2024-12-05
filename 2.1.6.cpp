#include<iostream>
#include<cctype>
void counts(const char s[] , int counts[]){
	counts[26] = 0;
	while(*s){
		char lower = std::tolower(*s);
		
		if(lower >= 'a' && lower <= 'z'){
			counts[lower - 'a']++;
		}
		++s;
	}
}

int main(){
	const int size = 100;
	char str[size];
	int lettercounts[26] = {0};
	
	std::cout << "enter a string:";
	std::cin.getline(str , size);
	
	counts(str , lettercounts);
	
	for(int i = 0;i < 26;i++){
		if(lettercounts[i] > 0){
			std::cout << static_cast<char>('a' + i) << ": " << lettercounts[i] << " times";
			std::cout << std::endl;
		}
	}
	return 0;
}