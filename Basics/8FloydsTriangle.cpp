#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int height = 0, counter = 0;
    cout << "Enter The Height of The Triangle-?!: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ++counter << " ";
        }
        cout << endl;
    }

    return 0;
}
