#include <iostream>
#include <cmath>
using namespace std;



/* @brief:  
    On Logic That if "num" Variable is Divisible By Any Other number Than 1 or "num" 
    Then It'll Be Prime!! */
bool isPrime(int num)
{
    /* @brief: Any Number Less Than 2 is not Prime */
    if (num < 2)
    {
        return false; 
    }

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            return false;
        }
    }

    return true;
} 



/*
    @Question: Why Do We Do This ?
    -----------------------------------------------------------------------------------------
    Divisor Pairs: ----------------------------------
    When checking if a number n is prime, you only need to search for divisors
    up to the square root of n (or sqrt(n)). This is because if n is not a 
    prime number, it must have at least one pair of divisors, 
    one of which is less than or equal to sqrt(n) and the other is greater 
    than or equal to sqrt(n).
    -----------------------------------------------------------------------------------------

    Avoiding Redundant Checks: ----------------------------------
    By searching for divisors only up to the square root, 
    you can avoid checking pairs of divisors twice. For example, if you've already checked 
    if 2 is a divisor of n, you don't need to check if n/2 is a divisor 
    because you've essentially covered both cases with a single check. 
    This reduces the number of iterations and makes the code more efficient.
    -----------------------------------------------------------------------------------------

    Efficiency: ---------------------------------- 
    Checking divisors up to sqrt(n) instead of all the way up to n-1 
    (as you would in a simple for loop) significantly reduces the number of iterations, 
    especially for large numbers. This optimization becomes more important as the size 
    of the number increases.
    -----------------------------------------------------------------------------------------

*/
bool isPrimeOptimized(int number)
{
    /* @brief: Any Number Less Than 2 is not Prime */
    if (number < 2)
    {
        return false; 
    }

    for (int i = 2; i < sqrt(number); i++)
    {
        if ((number % i) == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *argv[])
{   
    for (int i = 1; i < 100; i ++)
    {
        if (isPrime(i))
        {
            cout << i << ", "; 
        }
    }
    cout << endl;
    return 0;
}
