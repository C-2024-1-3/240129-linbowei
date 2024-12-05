#include<iostream>
#include<cstring>

int indexof(const char *s1 , const char *s2){
	char *position = strstr(s2 , s1);
	if(position != nullptr){
		return position - s2;
	}
	else{
		return -1;
	}
}

int main(){
	char s1[100] , s2[100];
	
	std::cout << "enter the string s1:";
	std::cin.getline(s1 , 100);
	std::cout << "enter the string s2:";
	std::cin.getline(s2 , 100);
	
	int index = indexof(s1 , s2);
	std::cout << index << std::endl;
}