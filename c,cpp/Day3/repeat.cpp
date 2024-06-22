#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char mostFrequentChar(const string& str) {
    // HashMap to store frequency of each character
    unordered_map<char, int> charFrequency;

    // Count frequency of each character in the string
    for (char c : str) {
        charFrequency[c]++;
    }

    // Variables to track the maximum frequency and the corresponding character
    char maxChar = '\0';
    int maxCount = 0;

    // Iterate through the map to find the character with maximum frequency
    for (auto& pair : charFrequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    return maxChar;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char mostFreqChar = mostFrequentChar(input);

    if (mostFreqChar != '\0') {
        cout << "Most frequent character: " << mostFreqChar << endl;
    } else {
        cout << "No characters found in the string." << endl;
    }

    return 0;
}

