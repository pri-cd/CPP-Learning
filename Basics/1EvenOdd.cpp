#include <iostream>
using namespace std;

void checkEvenOdd(int num);


/*
    @brief: What Does this Function Do ?
    @Answr: This is The Start of The Program!-
*/
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i ++)
    {
        checkEvenOdd(i);
    }
    return 0;
}


/*
    @brief:     User-Defined Function
    @input:     num <int> : The number you wish to test for even or oddity.
    @return:    void

*/
void checkEvenOdd(int num)
{

    /* @brief:  If The remainder while dividing the "num" by 2 is Zero: Then Its "Even"
                Else "Odd" Number! */
    if (num % 2) 
    {
        cout << "Odd Number: " << num << "! " << endl;
    }
    else
    {
        cout << "Even Number: " << num << "! " << endl;
    }

}