#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    
    /*
    @brief: There is a Function Called: scanf() that is mostly 
    used to take inputs from user.
    
    @note: There're many other ways to get input from a user one way is to 
    get command Line Variables.
    */
    int num1 = 0;
    printf("[+]Please Enter A Number: ");
    scanf("%d", &num1);

    /*
    @attention: What is %d: We Call These-- Format Specifiers-
    @example: For Example: We Have-- 

    int:    %d
    float:  %f
    double: %lf
    char:   %c
    string: %s

    @note: There are more ways to Modify the Formats Like Rounding Zeros, Reducing Zeros,
    signedness..
    */
    printf("You Entered: %d.\n", num1);
    return 0;
}
