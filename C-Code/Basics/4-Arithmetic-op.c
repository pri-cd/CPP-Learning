#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int num1 = 36;
    int num2 = 12;

    printf("[+]Two Numbers: num1: %d, num2: %d.\n\n", num1, num2);

    printf("[+]Addition of Numbers: %d.\n", num1 + num2);
    printf("[+]Subtraction of Numbers: %d.\n", num1 - num2);
    printf("[+]Multiplication of Numbers: %d.\n", num1 * num2);
    printf("[+]Division of Numbers: %d.\n", num1 / num2);
    printf("[+]Modulo(Remainder) of Numbers: %d.\n", num1 % num2);

    return 0;
}
