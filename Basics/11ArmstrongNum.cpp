#include <iostream>
#include <cmath>
using namespace std;


bool isArmstrong(int num)
{
    int og_Number = num; /* Storing a Copy of Number. */
    int sum = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        sum += pow(last_digit, 3);
        num /= 10; 
    }

    if (sum == og_Number)
    {
        return true;
    }
    return false; 

}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter The Number You Wish To Find The If Amstrong or Not!?: ";
    cin >> num;

    cout << "Number: " << num << " -> Is ArmStrong: " << (isArmstrong(num) ? "True" : "False") << endl;

    return 0;
}
