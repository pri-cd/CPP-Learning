#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* @brief: I Assigned Zero To num1 So, That Initial Value is not Random.. */
    int num1 = 0;
    try
    {
        cout << "Enter Any Number: ";
        cin >> num1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
    cout << "Entered Number are: " << num1 << endl;
    return 0;
}
