#include<iostream>
#include<cstring>
int indexOf(const char s1[] , const char s2[]){
	int len1 = 0 , len2 = 0;
	
	while(s1[len1] != '\0'){
		len1++;
	}
	while(s2[len2] != '\0'){
		len2++;
	}
	
	for(int i = 0;i <= len2 - len1;i++){
		int j;
		for(j = 0;j < len1;j++){
			if(s2[i + j] != s1[j]){
				break;
			}
		}
		if(j == len1){
			return i;
		}
	}
	return -1;
}
int main(){
	char first[100];
	char second[100];
	
	std::cout << "Enter the first string:";
	std::cin.getline(first , 100);
	std::cout << std::endl;
    std::cout << "Enter the second string:";
	std::cin.getline(second , 100);;
	
	int index = indexOf(first , second);
		std::cout << "indexOf("<< "\"" << first 
		          << "\",\"" << second << "\")" 
		          << "is " << index;
	
	return 0;
}