#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {12, 23, 34, 45, 56, 67};
    int key, pos;

    cout << "Initial Vector Elements:" << endl;
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    cout << "Enter the element to insert: ";
    cin >> key;

    cout << "Enter the position to insert (0 to " << v.size() << "): ";
    cin >> pos;

    // Check if position is valid
    if (pos < 0 || pos > v.size()) {
        cout << "Invalid position!" << endl;
        return 1; // Exit with error code
    }

    vector<int>::iterator it = v.begin() + pos;
    v.insert(it, key);

    cout << "Vector Elements after inserting " << key << ":" << endl;
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}

