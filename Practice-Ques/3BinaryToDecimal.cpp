#include <iostream>
#include <cmath>

using namespace std;

int binaryTodecimal(int bin);
int decimalToBin(int dec);

int main(int argc, char const *argv[])
{
    int BinaryNum = 0;
    cout << "Enter The Binary Number!? : "; cin >> BinaryNum;

    int decNum = binaryTodecimal(BinaryNum);
    if (decNum > 0)
    {
        cout << "The Decimal Equivalent of Above Num is: " << decNum << endl;
    }

    int bin = decimalToBin(decNum);
    cout << "The Binary Equivalent of Above Decimal Num is: " << bin << "." << endl;

    return 0;
}


/* @brief:      To Convert Binary Number To Integer 
   @details:    -> Take The Digits Apart!!! -> Convert Them To Their Decimal Equivalents.
*/
int binaryTodecimal(int bin)
{
    int decNum = 0;
    int binPow = 0;

    /* The Base of Binary Number is: 2. */
    static int baseBin = 2;
    
    while(bin > 0)
    {
        int lastNum = bin % 10;
        if (lastNum != 0 && lastNum != 1)
        {
            decNum = -1;
            cout << "Please Don't Provide Invalid Numbers, Only Provide Valid Numbers!! " << endl;
            break;
        }
    
        decNum += (lastNum) * (pow(baseBin, binPow++));
        bin /= 10;
    }

    return decNum;
}

int decimalToBin(int dec)
{
    int bin = 0;

    while (dec > 0)
    {
        int que = dec / 2;
        int rem = dec % 2;
        bin = (bin * 10) + (rem);
        dec = que;
    }

    return bin;
} 