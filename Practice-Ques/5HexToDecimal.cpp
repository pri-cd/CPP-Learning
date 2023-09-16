#include <iostream>
#include <string>
using namespace std; 

unsigned long hexToInt(string hex);
string IntToHexString(unsigned long num);


int main(int argc, char const *argv[])
{
    string hex = "";
    
    cout << "Enter The HexaDecimal Number!?: ";
    cin >> hex;

    unsigned long num = hexToInt(hex);
    cout << "Number After Conversion Is: " << num << "." << endl;
    cout << "Hex Equivalen After Re-Conversion is: " << IntToHexString(num) << "." << endl;
   
    return 0;
}

/* My Code -- Since, Need TO Understand The Complete Working of It!! */
unsigned long hexToInt(string hex)
{
    unsigned long intNum = 0;

    for (int i = 0; i < (int) hex.size(); i++)
    {
        intNum = (intNum * 16);
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            intNum += (hex[i] - '0');
        }
        else
        if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            intNum += ((hex[i] - 'A') + 10);
        }
        else
        if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            intNum += ((hex[i] - 'a') + 10);
        }
        else
        {
            cout << "Don't Pass Invalid Arguments!!!" << endl;
            intNum = 0;
            break;
        }
    }

    return intNum;
}


char IntToHexChar(int intNum)
{  
    char chr = '\0';

    if (intNum >= 0 && intNum <= 9)
    {
        return static_cast<char>('0' + intNum);
    }
    else
    if (intNum >= 10 && intNum <= 15)
    {
        return static_cast<char>('A' + (intNum - 10));
    }
    else
    {
        throw std::invalid_argument("Invalid Integer Value.");
    }

    return chr;
}

string IntToHexString(unsigned long num)
{
    string hexString = "";

    while (num > 0)
    {
        int rem = num % 16;
        hexString = IntToHexChar(rem) + hexString;
        num /= 16;
    } 

    return hexString;
}