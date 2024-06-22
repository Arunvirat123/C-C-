#include <iostream>
#include <algorithm> // for std::sort
#include <string>

using namespace std;

int main() {
    string str;
    
    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Sort the string
    sort(str.begin(), str.end());
    
    // Output the sorted string
    cout << "Sorted string: " << str << endl;
    
    return 0;
}

