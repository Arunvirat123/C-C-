#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompting user to enter two numbers separated by space
    cout << "Enter two numbers separated by space: ";
    
    // Reading two numbers from single line input
    cin >> num1 >> num2;

    // Using ternary operator to find the largest number
    int largest = (num1 > num2) ? num1 : num2;

    // Printing the largest number
    cout << "The largest number of 10 and 5 is: " << largest << endl;

    return 0;
}
