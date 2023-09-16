#include <iostream>
using namespace std;

void checkEvenOdd(int num);
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i ++)
    {
        checkEvenOdd(i);
    }
    return 0;
}


void checkEvenOdd(int num)
{

    if (num % 2) 
    {
        cout << "Odd Number: " << num << "! " << endl;
    }
    else
    {
        cout << "Even Number: " << num << "! " << endl;
    }

}