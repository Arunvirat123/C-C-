#include<iostream>
#include<cstring>

class Mystring 
{
    char *ptr;
public:
    Mystring(const char *p_ptr = nullptr)
    {
        if (p_ptr == nullptr) {
            ptr = new char[1];
            *ptr = '\0';  // Empty string
        } else {
            int len = strlen(p_ptr);
            ptr = new char[len + 1];
            strcpy(ptr, p_ptr);
        }
    }
    
    Mystring(const Mystring &old)
    {
        std::cout << "copy constructor\n";
        if (old.ptr == nullptr) {
            ptr = new char[1];
            *ptr = '\0';  // Empty string
        } else {
            int len = strlen(old.ptr);
            ptr = new char[len + 1];
            strcpy(ptr, old.ptr);
        }
    }
    
    ~Mystring()
    {
        std::cout << "destructor\n";
        delete [] ptr;
    }
    
    // Assignment operator
    Mystring& operator=(const Mystring &rhs)
    {
        std::cout << "assignment operator\n";
        if (this != &rhs) {  // Check for self-assignment
            delete [] ptr;  // Free existing memory
            
            if (rhs.ptr == nullptr) {
                ptr = new char[1];
                *ptr = '\0';  // Empty string
            } else {
                int len = strlen(rhs.ptr);
                ptr = new char[len + 1];
                strcpy(ptr, rhs.ptr);
            }
        }
        return *this;
    }
};

int main()
{
    Mystring s1("ARUN");  // Initialize with a const char*
    Mystring s2 = s1;     // Use copy constructor
    Mystring s3;           // Default constructor (nullptr)
    s3 = s1;               // Use assignment operator
    
    return 0;
}

