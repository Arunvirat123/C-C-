 #include <iostream>
 #include <vector>
 using namespace std;
// Stack is a Linear Data Structure where elements are inserted and deleted from SAME END.
// Insert : push
// Delete : pop

class MyStack
{
    vector<int>  buffer;
public:
    void push(int ele)
    {
        buffer.push_back(ele);      // buffer.insert(buffer.end() , ele )
    }
    int pop( )
    {
        int ele = buffer.back();   // buffer[buffer.size() - 1]
        buffer.pop_back();
        return ele;
    }
    bool empty()
    {
        return buffer.empty();     // buffer.size() == 0
    }
    int peek()      // top
    {
        return buffer.back();
    }
    void display() 
    {
        // Code to traverse the element of buffer from top to bottom.
    }
};

class MyQueue
{
    vector<int>  buffer;
public:
    void push(int ele)
    {
        buffer.push_back(ele);      // buffer.insert(buffer.end() , ele )
    }
    int pop( )
    {
        int ele = buffer.front();   // buffer[buffer.size() - 1]
        //buffer.pop_back();
        buffer.erase(buffer.begin());
        return ele;
    }
    bool empty()
    {
        return buffer.empty();     // buffer.size() == 0
    }
    int front()      // top
    {
        return buffer.front();
    }
    void display() 
    {
        // Code to traverse the element of buffer from first to last 
        for(int i = 0 ; i < buffer.size() ; i++)
        {
            cout<<buffer[i] <<" ";
        }
    }
};

int main()
{
    // Write a menu driven program for stack.
    MyStack     s;
    for(;;)
    {
        cout << "Stack Menu \n";
        cout <<"1. Push 2. Pop 3. Peek 4. Display 5. Exit \n";
        cin >> ch;
        switch(ch)
        {
            case PUSH : cout <<"Enter the element to insert : ";
                        cin >> ele;
                        s.push(ele);
                        break;
            case POP : 

        }
    }

    // Write a menu driven program for queue
	return 0;
}


