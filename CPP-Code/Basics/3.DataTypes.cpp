#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    /*
        @brief: Integer: (4 Bytes): (32 bits): (0 to ((2 ^ 32) - 1) Range
        @brief: Float  : (4 Bytes): (32 Bits): (Upto 7 Decimal Digits)
        @brief; Double : (8 Bytes): (64 Bits): (Upto 15 Decimal Digits)
        @brief: char   : (1 Bytes): (8 Bits) : (0 to (2^8) -1 Range)
    */
    int     num1 = 2;
    float   num2 = 3;
    double  num3 = 4;
    char    num4 = 5;
    bool    num5;
     
    cout << "Size of Integer:" << sizeof(num1) << endl;
    cout << "Size of Float:" << sizeof(num2) << endl;
    cout << "Size of Double:" << sizeof(num3) << endl;
    cout << "Size of Char:" << sizeof(num4) << endl;
    cout << "Size of Bool:" << sizeof(num5) << endl;

    /*
        @brief: There Are Type Modifiers!-- 
        @note:
            unsigned
            short
            long
            signed (Automatically Applies to All Definitions!)
    */
    return 0;
}
