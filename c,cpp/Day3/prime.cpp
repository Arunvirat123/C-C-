#include <iostream>
#include <vector>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int num;
    std::vector<int> numbers;

    // Input numbers from user until a negative number is entered
    std::cout << "Enter numbers (enter a negative number to stop):\n";
    while (true) {
        std::cin >> num;
        if (num < 0) break;
        numbers.push_back(num);
    }

    // Finding and printing prime numbers in the list
    std::cout << "Prime numbers in the list:\n";
    for (int num : numbers) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

