#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 3, 5, 7, 9};
    std::vector<int> set2 = {2, 3, 5, 7, 11};
    // 1, 2, 3, 5, 7, 9, 11
    std::vector<int> result;
    std::cout << result.size() << std::endl;
    // Resize the result vector to accommodate the union of the two sets
    result.resize(set1.size() + set2.size());
    std::cout << result.size() << std::endl;
    // Compute the union
    auto it = std::set_union(set1.begin(), set1.end(), 
                             set2.begin(), set2.end(), 
                             result.begin());

    // Resize the result vector to remove unused elements
    result.resize(it - result.begin());
    std::cout << result.size() << std::endl;
    // Print the result
    std::cout << "Union of set1 and set2: ";
    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
