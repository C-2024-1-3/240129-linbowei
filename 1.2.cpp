#include <iostream>
#include <cmath>
#include <vector>

bool is_prime(int num);

int main() {
	std::vector<int> primes;
    int count = 0; 
    int num = 2; 

    while (count < 200) {
        if (is_prime(num)) {
            primes.push_back(num);
            count++; 
        }
        num++;
    }

    for (int i = 0; i < 200; i++) {
        std::cout << primes[i] << "\t"; 
        if ((i + 1) % 10 == 0) { 
            std::cout << std::endl;
        }
    }

    return 0;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false; 
    }
    if (num == 2) {
        return true; 
    }
    if (num % 2 == 0 && num != 2) {
        return false; 
    }
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}