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
    auto_ptr<MyString>  p1 ( new MyString("SIKANDER"));
	p1->display();
 
    auto_ptr<MyString>  p2( p1 );
    p2->display();

 }



