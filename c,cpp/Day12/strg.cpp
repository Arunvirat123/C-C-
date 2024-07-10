#include <iostream>
#include <cstring>

class MyString {
private:
    char *ptr;
public:
    MyString(const char *str) {
        std::cout << "Constructor\n";
        ptr = new char[strlen(str) + 1];
        strcpy(ptr, str);
    }

    void display() const {
        std::cout << ptr << std::endl;
    }

    ~MyString() {
        std::cout << "Destructor\n";
        delete[] ptr;
    }
};

int main() {
    MyString name("SIKANDER");
    name.display();
    return 0;
}
