#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

/*
@brief: Makes it Easier For 
*/
#define MAX_NAME_LEN    300

/* 
@note: Enum Are Very important Data type for Storing Small Spectrum of Possible Values such as
Example Given Below.
*/
enum id_e
{
    MALE,
    FEMALE,
    OTHER,
};

struct person
{
    char name[MAX_NAME_LEN];
    enum id_e gender;
};


int main(int argc, char const *argv[])
{
    /*
    @brief: These Are the most used Data-Types in Programming...
    @note:  They Are Very Basic version more Advnaced Type Modified Version Are Found in: "stdint.h" 
    int32_t: int
    int64_t: long
    etc, 
    etc.
    */

    int             num1 = 19;
    float           num2 = 12.21;
    double          num3 = 12.343;
    char            chr1 = 'A';
    char            str[50]; 
    struct person   ps1;

    memset(&str, 0, sizeof(str));
    memset(&ps1, 0, sizeof(ps1));

    /*
    @brief: Clean The Memory Buffer Since It's initialized and Might have Random Values..
    @note:  We Can Clean it Using memset();
    */
    strcpy(str, "Hello, C!");
    strcpy(ps1.name, "John Doe");
    ps1.gender = MALE;

    printf("[+]The Integer variable: \"num1\" stored: %d.\n", num1);
    printf("[+]The Float variable: \"num2\" stored: %f.\n", num2);
    printf("[+]The Double variable: \"num3\" stored: %lf.\n", num3); 
    printf("[+]The Character variable: \"chr1\" stored: %c.\n", chr1);
    printf("[+]The CharArray variable: \"str\" stored: \"%s\".\n",str);

    printf("[+]The Struct: ps1(person): Name: \"%s\".\n", ps1.name); 
    /*
    @brief: Below line Uses Advanced If-Else operator or Some People Call it - "Ternary Operations". 
    @note: You Could Do The Same Thing in 2-4 Lines and Even using a Function.. But, Isn't it Much Easier to Read
    This way - ?
    */
    printf("[+]The Struct: ps1(person): Gender: \"%s\".\n", ps1.gender ? "Female" : "Male");
    
    return 0;
}
