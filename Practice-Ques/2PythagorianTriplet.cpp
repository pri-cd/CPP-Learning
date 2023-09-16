#include <iostream>
#include <cmath>
using namespace std;

int maxNum(int num1, int num2);
bool isPythaGoriianTriplet(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 0, num3 = 0;     
    
    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    cout << "Enter 3rd Number: ";
    cin >> num3; 

    cout << "The Numbers Are Pythagorial Triplet: " << (isPythaGoriianTriplet(num1, num2, num3) == false ? "False" : "True") << "." << endl;

    return 0;
}

/*
    @brief: This Function 
    @details: find Max Number -> Verify The Equation a^2 = b^2 + c^2;
*/
bool isPythaGoriianTriplet(int a, int b, int c)
{
    int max = maxNum(maxNum(a, b), c);

    int p = 0, q = 0;
    if (a == max)
    {
        p = b;
        q = c;
    }
    else
    if (b == max)
    {
        p = a; 
        q = c; 
    }
    else
    if (c == max)
    {
        p = a;
        q = b;
    }

    if (pow(max, 2) == (pow(p, 2) + pow(q, 2)))
    {
        return true;
    }

    return false;
}

int maxNum(int num1, int num2)
{
    return ((num1 > num2) ? (num1) : (num2));
}