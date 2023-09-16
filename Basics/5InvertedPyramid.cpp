#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int height = 0;

    cout << "Enter The Height of The Shape!?: ";
    cin >> height;

    for (int i = height; i > 0; i --)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}
