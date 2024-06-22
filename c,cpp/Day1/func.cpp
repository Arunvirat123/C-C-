#include <iostream>
using namespace std;

// Function to calculate the area of a circle given its radius
double calculateCircleArea(double radius) {
    const double PI = 3.14159; // Define the value of pi
    double area = PI * radius * radius; // Calculate the area using the formula A = πr^2
    return area; // Return the calculated area
}

int main() {
    double radius;

    // Prompt user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area of the circle using the function
    double area = calculateCircleArea(radius);

    // Output the calculated area
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle given its length and breadth
double calculateRectangleArea(double length, double breadth) {
    double area = length * breadth; // Calculate the area using the formula A = length * breadth
    return area; // Return the calculated area
}

int main() {
    double length, breadth;

    // Prompt user to enter the length and breadth of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Calculate the area of the rectangle using the function
    double area = calculateRectangleArea(length, breadth);

    // Output the calculated area
    cout << "The area of the rectangle with length " << length << " and breadth " << breadth << " is: " << area << endl;

    return 0;
}

