#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1 = 4;         
    int calculated_space = 0;
 
    for (int i = 1; i <= num1; i++)
    {
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*"; 
            }   
            
            calculated_space = ((2 * num1) - (2 * i));
            for (int space = 1; space <= calculated_space; space++)
            {
                cout << " ";
            }

            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << endl; 
        }
    }

     for (int i = num1; i > 0; i--)
    {
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*"; 
            }   
            
            calculated_space = ((2 * num1) - (2 * i));
            for (int space = 1; space <= calculated_space; space++)
            {
                cout << " ";
            }

            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << endl; 
        }
    }
    return 0;
}
