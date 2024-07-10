 #include <iostream>
 #include <vector>
 using namespace std;
// Stack is a Linear Data Structure where elements are inserted and deleted from SAME END.
// Insert : push
// Delete : pop
class LinearDS 
{
 protected:
    vector<int>  buffer;
 public :
    void push(int ele)
    {
        buffer.push_back(ele);      // buffer.insert(buffer.end() , ele )
    }
    bool empty()
    {
        return buffer.empty();     // buffer.size() == 0
    }
    virtual int pop( ) = 0;
    virtual void display() = 0;
};

class MyStack : public LinearDS
{
    
public:
    int pop( ) override
    {
        int ele = buffer.back();   // buffer[buffer.size() - 1]
        buffer.pop_back();
        return ele;
    }
    int peek()      // top
    {
        return buffer.back();
    }
    void display() override
    {
        auto it = buffer.rbegin();
        while(it != buffer.rend())
        {
            cout << *it << endl;
            it++;
        }
    }
};

class MyQueue : public LinearDS
{
public:
    int pop( ) override
    {
        int ele = buffer.front();   // buffer[buffer.size() - 1]
        //buffer.pop_back();
        buffer.erase(buffer.begin());
        return ele;
    }

    int front()      // top
    {
        return buffer.front();
    }
    void display() override
    {
        // Code to traverse the element of buffer from first to last 
        for(int i = 0 ; i < buffer.size() ; i++)
        {
            cout<<buffer[i] <<" ";
        }
    }
};
enum {PUSH = 1, POP , PEEK , DISPLAY , EXIT , FRONT = 3};
void menu(LinearDS &s)
{
    int ch;
    int ele;
    for(;;)
    {
        if(typeid(s) == typeid(MyStack))
            cout << "Stack Menu \n";
        else
            cout <<"Queue Menu \n";
        cout <<"1. Push 2. Pop 3. ";
        if(typeid(s) == typeid(MyStack))
            cout <<"Peek ";
        else 
            cout <<"Front ";
        cout<< "4. Display 5. Exit \n";
        cin >> ch;
        switch(ch)
        {
            case PUSH : cout <<"Enter the element to insert : ";
                        cin >> ele;
                        s.push(ele);
                        break;
            case POP : if(s.empty() == false)
                        {
                            cout << s.pop();
                        }
                        else{
                            if(typeid(s) == typeid(MyStack))
                                cout <<"Stack is Empty \n";
                            else
                                cout <<"Queue is Empty \n";
                        }
                        break;
//           case PEEK : cout << s.peek(); break;
            case DISPLAY : s.display(); break;
            default : return;
        }
    }

}
int main()
{
    MyStack s;
    MyQueue q;
    menu(s);
    menu(q);
	return 0;
}


