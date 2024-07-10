using namespace std;
#include <iostream>
#include<map>
#include<vector>
 
void removeDuplicates(vector<int> v1){
    map<int , int> mpp;
    for(int ele : v1){
        mpp[ele]++;
    }
    for(auto ele : mpp){
         cout << ele.first << " : " << ele.second << endl;
    }
    cout<<endl;
}
 
int main()
{
    vector<int> v1 = {2,3,5,2,2,1,9,5,6};
    removeDuplicates(v1);
 
    return 0;
}
