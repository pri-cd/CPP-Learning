#include <iostream>
using namespace std;

int calculate_factorial(int num1)
{
    int fact = 1;

    for (int i = 1; i <= num1; i++)
    {
        fact *= i;
    }

    return fact;
}

int main(int argc, char const *argv[])
{
    int numN = 0, numR = 0;
    cout << "Enter The Value of N in (NcR) in Equation: ";
    cin >> numN;

    cout << "Enter The Value of R in (NcR) in Equation: ";
    cin >> numR;

    int ncrVal = (calculate_factorial(numN)) / ((calculate_factorial(numN - numR)) * (calculate_factorial(numR)));
    cout << "Calculated NcR Values: " << ncrVal << "." << endl;
    
    return 0;
}
