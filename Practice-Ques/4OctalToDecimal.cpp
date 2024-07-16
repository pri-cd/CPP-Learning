#include <iostream>
#include <cmath> 
using namespace std; 

int octalTodecimal(int oct);
int decimalToOctal(int dec);

int main(int argc, char const *argv[])
{
    int oct = 0;
    cout << "Enter Ocatal Number!?: "; cin >> oct;

    int dec = octalTodecimal(oct);
    if (dec > 0)
    {
        cout << "Decimal Equivalent of Octal Number is: " << dec << "." << endl; 
    }

    cout << "Octal Equvalent of Decimal Number is: " << decimalToOctal(dec) << endl;

    return 0;
}


int octalTodecimal(int oct)
{  
    int decNum = 0;
    int octPow = 0;

    /* The Base of Binary Number is: 2. */
    static int baseOct = 8;
    
    while(oct > 0)
    {
        int lastNum = oct % 10;
        if (lastNum > 7 || lastNum < 0)
        {
            decNum = -1;
            cout << "Please Don't Provide Invalid Numbers, Only Provide Valid Numbers!! " << endl;
            break;
        }
    
        decNum += (lastNum) * (pow(baseOct, octPow++));
        oct /= 10;
    } 

    return decNum;
}

int decimalToOctal(int dec)
{
    int oct = 0;
    while (dec > 0) 
    {
        int que = dec / 8;
        int rem = dec % 8;

        oct = (oct * 10) + (rem); 

        dec = que;   
    }

    return oct;
}