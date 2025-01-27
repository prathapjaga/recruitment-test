#include <iostream>
using namespace std; 

namespace ABC 
{ 
    int data = 10; 
    void foo()
    {
        cout << "in ABC foo :" << endl; 
    } 
} 

namespace XYZ 
{
    float data = 2.3;
    void foo() 
    {
        cout << "in XYZ foo:" << endl; 
    } 
}

using namespace XYZ; 

int main() 
{
    cout << XYZ::data << endl;  // Explicitly specify that you want XYZ::data
    ABC::foo();                 // Explicitly call ABC::foo

    return 0;
}
