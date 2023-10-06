#include <iostream>
using namespace std; 

/*
    @brief: "Time Complexity" of An Algorithm quantifies the amount of time taken by 
            a program to run as a function of length of the Input!.

    @brief: "Space Complexity" of An Algorithm quantifies the amount of time taken by
            a program to run a function of length of the input. It's Directly Proportional
            to the Largest memory your program acquires at any instance during this time!.
*/

void time_complexity_single_loop();
void time_complexity_nested_loop();

/* @brief: Main() This Function is main Executable!. */
int main(int argc, char const *argv[])
{
    time_complexity_single_loop();

    return 0;
}


void time_complexity_nested_loop()
{
    int end1 = 10;                          /* @brief: Definition/Declaration of First Variable! */
    int num1 = 0;                           /* @brief: Definition/Declaration of Secon Variable! */


    for (int i = 0; i <= end1; i++)         /* @brief: The Number1 is Traversing Over Loop1!. */
    {
        for (int j = 1; j <= end1; j++)     /* @brief: The Number2 is Traversing Over Loop2!*/
        {
            num1 += 1;                      /* @brief: The Variabl is Incrementing by 1. */
        }
    }

    return;
}
/* @result: The Above Function Represents: 

            1. Space Complexity: [end1 = 4 Bytes, num1 = 4 Bytes, (i) = 4 Bytes, (j) = 4 Bytes]
            2. Space Complexity: [4(4) = 16.]       
*/


void time_complexity_single_loop()
{
    int end1 = 10;                      /* @brief: Definition/Declaration of First Variable! */
    int num1 = 0;                       /* @brief: Definition/Declaration of Secon Variable! */


    for (int i = 0; i <= end1; i++)     /* @brief: Integer Traversing Over Loop!. */
    {
        num1 += 1;                      /* @brief: The Number is Incrementing 1. */
    }

    return;
}

/* @result: The Above Function Has A Linear Time-Complexity!
            Space Complexity: [(4 + 4 + 4) = 12]. [Constant: Space Complexity]
            Time Complexity : O(big oh)(end1) Times -> Worst Case Complexity.
*/