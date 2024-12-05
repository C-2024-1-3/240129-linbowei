#include<iostream>
#include<vector>

void merge(const int list1[] , int size1 , const int list2[] , int size2 , int list3[]){
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2){
		if(list1[i] <= list2[j]){
			list3[k++] = list1[i++];
		}else{
			list3[k++] = list2[j++];
		}
	}
		while(i < size1){
			list3[k++] = list1[i++];
		}
		while(j < size2){
			list3[k++] = list2[j++];
		}
}

int main(){
	int size1 , size2;
	
	std::cout << "Enter list1:";
	std::cin >> size1;
	std::vector<int> list1(size1);
	for(int i = 0;i < size1;i++){
		std::cin >> list1[i];
	}
	std::cout << std::endl;
	
	std::cout << "Enter list2:";
	std::cin >> size2;
	std::vector<int> list2(size2);
	for(int i = 0;i < size2;i++){
		std::cin >> list2[i];
	}
	
	std::vector<int> list(size1 + size2);
	merge(list1.data() , size1 , list2.data() , size2 , list.data());
	
    std::cout << "The merged list is ";
    for(int i = 0;i < size1 + size2;i++){
    	std::cout << list[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
