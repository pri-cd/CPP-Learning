#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int inc1 = 0;

    /*
    @Question: How Does Post Increment Works - ?
    @brief: Increment Works Simply As The Name Depicts: The value is incremented after 
    the operator has been called. And Takes effect on next calls.

    */
    printf("Post Increment: 1st: %d.\n", inc1++);
    printf("Post Increment: 2nd: %d.\n", inc1++);
    printf("Post Increment: 3rd: %d.\n", inc1++);
    printf("Post Increment: 4th: %d.\n", inc1++);
    printf("Post Increment: 5th: %d.\n", inc1++);

    return 0;
}
