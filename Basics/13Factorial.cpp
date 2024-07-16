#include <iostream>
using namespace std;

void factorial(int num)
{
    int factNum = 1; 

    for (int i = 1; i <= num; i++)
    {
        factNum *= i;
    }
    cout << "The FactoriaL Is: " << factNum << endl;
    return; 
}

int main(int argc, char const *argv[])
{
    int num = 0;
    cout << "Enter The Number For Which You Want TO Find Factorial Of !?: " ;
    cin >> num; 

    factorial(num);
    return 0;
}
