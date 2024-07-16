#include <iostream>
using namespace std;

int sum_using_loop(int endNum);
int sum_using_formula(int endNum);


int main(int argc, char const *argv[])
{
    int num = 0;
    cout << "Enter The N in (1 + 2 + .... + N -1)!: ";
    cin >> num;

    cout << "Sum of N Number Using Loop: " << sum_using_loop(num) << endl;
    cout << "Sum of N Number Using Formulae: " << sum_using_formula(num) << endl;

    return 0;
}


/*
    @brief: This Utilises The Sum Formula ((n)(n + 1)) / 2 
    @param: integer -> endNum (The Final Exclusive N number) -> Sum from 1 - N Will Be Calculated. 
*/
int sum_using_loop(int endNum)
{
    int sum = 0;

    for (int i = 0; i <= endNum; i++)
    {
        sum += i;
    }

    return sum;
}


/*
    @brief: This Function Utilises The Formula: ((n)(n + 1)) / 2
    @param: integer -> endNum (The Final Exclusive N number) -> Sum from 1 - N Will Be Calculated. 
*/
int sum_using_formula(int endNum)
{
    int sum = 0; 

    sum = ((endNum)*(endNum + 1)) / 2;

    return sum;
}
