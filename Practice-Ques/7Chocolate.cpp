#include <iostream>
using namespace std; 


/*
    @Question: How many chocolates you can get ?

    - You've 15 Rupee
    - 1 Rs = 1 Chocolate
    - 3 Wrapper = 1 Chocolate
*/


int choco(int rupee, int costRs, int costWr);

int main(int argc, char const *argv[])
{
    int rs = 15; 
    cout << "The Number of Chocolates We can get is!: " << choco(rs, 1, 3) << ". \n";
    return 0;
}


int choco(int rupee, int costRs, int costWr)
{
    int numChoco = 0; 
    int numWrapp = 0;

    numChoco = rupee/costRs;
    numWrapp = numChoco;

    while (numWrapp >= costWr)
    {
        /* chocolates from wrappers */
        int newChoco= 0;
        
        newChoco = numWrapp / costWr;   
        numChoco += newChoco;    
        numWrapp = numWrapp % costWr + newChoco;
    }

    return numChoco;
}