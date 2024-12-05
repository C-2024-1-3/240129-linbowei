#include <iostream>
#include <set>
#include <windows.h>

int main() {
	SetConsoleOutputCP(CP_UTF8);
    std::set<int> uniqueNumbers;
    int number;

    std::cout << "请输入10个数：" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> number;
        uniqueNumbers.insert(number); 
    }

    std::cout << "不同的数有：" << std::endl;
    for (int num : uniqueNumbers) {
        std::cout << num << std::endl;
    }

    return 0;
}