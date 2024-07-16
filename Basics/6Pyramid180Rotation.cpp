#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int height = 0;
    int i, j;
    cout << "Enter The Height of The Pyramid !?: ";
    cin >> height;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            /*
            @Question:  Why Do We Do This -?
            @Answer:    Logic Behind This is: if (Row is < (Difference of Current Height And Total Height)) 
            @Values:    Height = 10, 9, 8, 7, 6.... (j < 10 ...)  
            */
            if (j < (height - i))
            {
                cout << " "; 
            }
            else
            {
                cout << "*";
            }

        }
            
        cout << endl;
    }

    return 0;
}
