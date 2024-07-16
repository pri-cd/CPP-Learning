#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0, reverse = 0;
    cout << "Enter A Number To Reverse!?: ";
    cin >> num;

    while (num > 0)
    {
        int lastDigit = num % 10; 
        /*
            @Brief: Take Example: 120;
            Number Returned By LastDigit: 
                1st Iteration: 120 % 10 = 0 -> 120/10 = 12;
                2nd Iteration: 12 % 10 = 2  -> 12/10 = 2
                3rd Iteration: 2 % 10 = 
        */

        /* This is A Very Important Concept About How A number is Built From Scratch. */
        reverse = (reverse * 10)  + lastDigit; 
        num = num/10;
    }

    cout << "Reversed Number is: " << reverse << "." << endl;
    return 0;
}

/*
    @Function:  reverse = (reverse * 10)  + lastDigit; 
    How Does The Above Code Function !?: 1234 
                                            -> 0000 + 4;
                                            -> 0040 + 3;
                                            -> 0430 + 2;
                                            -> 4320 + 1;

*/