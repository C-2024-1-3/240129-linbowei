#include <iostream>
#include<windows.h>
void sortArray(int* array, int size);

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int size;
    
    std::cout << "请输入数组的元素个数: ";
    std::cin >> size;
    
    int* array = new int[size];
    
    std::cout << "请输入数组的元素: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    
    sortArray(array, size);
    
    std::cout << "排序后的数组元素为: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(array + i) << " ";
    }
    std::cout << std::endl;
    
    delete[] array;
    
    return 0;
}

void sortArray(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (*(array + j) > *(array + j + 1)) {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}