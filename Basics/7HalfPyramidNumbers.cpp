#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num = 0;
    cout << "Enter The Dimensions of The Shape!?: ";
    cin >> num;

    if (num > 9)
    {
        return -1;
    }
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<  i;
        }
        cout << endl;
    }

    return 0;
}
