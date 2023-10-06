#include <iostream>
using namespace std;


unsigned long binAddition(int num1, int num2);
bool isBinary(int num1);

int main(int argc, char const *argv[])
{

    int num1 = 0, num2 = 0; 

    cout << "Enter First Binary Number: "; cin >> num1;
    cout << "Enter Second BInary Number: "; cin >> num2; 

    if (isBinary(num1) && isBinary(num2))
    {
        cout << "Input Verified!-" << endl;
        int sum = binAddition(num1, num2);
        cout << "Binary Addition: " << sum << "." << endl;
    }
    else
    {
        cout << "Enter Right Input!!!-" << endl;
    }


    return 0;
}

unsigned long binAddition(int num1, int num2)
{
    /* @brief: The "Addition" Variable Will Store The Sum data! */
    unsigned long addition = 0;
    /* @brief: The Carry Will Store The Remaining Carry During Sum! */
    unsigned int carr = 0; 
    /* @brief: Place of Position For "Iterating" Purposes! */
    int placePos = 1;

    /* @brief;  Loop Until The num1, num2, carr > 0 */
    while (num1 > 0 || num2 > 0 || carr > 0)
    {  
        /* @brief: Step1: Select The Last Number of The Integer number. */
        int bit1 = num1 % 10; 
        int bit2 = num1 % 10;

        /* @brief: Step2: Calculate The Sum With The Carry!!! */
        int sum = bit1 + bit2 + carr;
        
        /* @brief: Step3: Calculate The Carry! 
                For Example:    bit1  = 1, 
                                bit2  = 1, 
                                carr  = 0 
                This Calculates: sum  = (1 + 1 + 0)   = 2.
                This Calculates: carr = (2/2)         = 1.                     
        */
        carr = sum / 2;

        /* @brief: Step4: This Calculates The Sum Again!: sum = (2 % 2) = 0 : That's Perfect. */
        sum %= 2;

        /* @brief: Step5: The Calculated -> Addtion is: (0 + (0 * 1) + 0) = 0 */
        /* @brief: Step6: This is Used To Construct The Number Back!!! (Just Like We Learned in Back Chapters!)*/
        addition = (sum * placePos) + addition;

        /* @brief: Step7: To Next Positions! */
        num1 /= 10; 
        num2 /= 10;
        placePos *= 10;
    }

    /* How It Works Completely!: (int num1 = 101, int num2 = 100)
            1. Iteration 1: 
                bit1 = 1, bit2 = 0, sum = 1.
                carr = 0, sum = 1 , addition = 1. 
                placePos = 10
            
            2. Iteration 2:
                bit1 = 0, bit2 = 0, sum = 0.
                carr = 0, sum = 0 , addition = 01 

            3. Iteration 3:
                bit1 = 1, bit2 = 1, sum = 2.
                carr = 1, sum = 0 , addition = 001
            
            4. (Carry = 1) Iteration 4:
                bit1 = 0, bit2 = 0, sum = 1;
                carr = 0, sum = 1 , addition = 1001.
    */
    return addition;
}


bool isBinary(int num1)
{
    bool isBin = true;

    while (num1 > 0)
    {
        int Lnum = (num1 % 10);
        if (Lnum != 0 && Lnum != 1)
        {
            isBin = false;
            break;
        }
        num1 /= 10;
    }

    return isBin;
}