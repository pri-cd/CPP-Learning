#include <iostream>
using namespace std;

int factorial(int num);
int calcualate_NcR(int numN, int numR); 


int main(int argc, char const *argv[])
{
    int num = 0; 
    cout << "Enter A Number For Pascal Triangle Generation!?: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << calcualate_NcR(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}


/* 
    @brief:     What Is A Pascal Triangle - ?
    @Answer:    0c0 
                1c0 1c1
                2c0 2c1 2c2
                3c0 3c1 3c2 3c3 .. Etc... (Factorial Calculations!).   

    @Steps:     What To Do ?
                1. Develop A Function That Calcualates NcR. (Also Factorial.) 
*/

int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int calcualate_NcR(int numN, int numR)
{
    int ncrVal = 0;
    ncrVal = (factorial(numN)) / ((factorial(numN - numR)) * (factorial(numR)));
    return ncrVal;
} 
