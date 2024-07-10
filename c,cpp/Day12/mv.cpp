 #include <iostream>
 #include <cstring>
 #include <memory>
 using namespace std;

 class MyString{
    char *ptr;
  public:
    MyString(const char *str){
        std::cout <<"Constructor \n";
        ptr = new char[strlen(str) + 1];
        strcpy(ptr , str);
    }
    MyString(const MyString &old){
        std::cout <<"Copy Constructor \n";
        ptr = new char[strlen(old.ptr) + 1];
        strcpy(ptr , old.ptr);
    }
    MyString(MyString &&old){
        std::cout <<"Move Constructor \n";
        //ptr = new char[strlen(old.ptr) + 1];
        //strcpy(ptr , old.ptr);
        ptr = old.ptr;
        old.ptr = nullptr;
    }
    
    void display() const {
        std::cout << ptr << std::endl;
    }
    ~MyString( ){
        std::cout << "Destructor \n";
        delete [] ptr;
    }
 };
 int main( )
 {    
    MyString    s1 = "Hello"; 
    MyString    s2(s1); 
    MyString    s3(move(s1));

    // unique_ptr<MyString>  p1 ( new MyString("SIKANDER"));
	// p1->display();
 
    // unique_ptr<MyString>  p2( move(p1) );   
    // p2->display();

 }



