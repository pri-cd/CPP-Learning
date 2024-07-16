#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int width = 0;
    int height = 0; 

    cout << "Enter The Height of The (Filled Rectangle)Shape!?: ";
    cin >> height;

    cout << "Enter The Width of The (Filled Rectangle)Shape!?: ";
    cin >> width;

    if ((height < 0 || width < 0) || (height > 20 || width > 20))
    {
        return -1;
    }

    for (int i = 0; i < height; i++)
    {   
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
