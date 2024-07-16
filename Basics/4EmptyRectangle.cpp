#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int height = 0;
    int width = 0;

    cout << "Enter The Height of The (EmptyRectangle)Shape!?: ";
    cin >> height;

    cout << "Enter The Width of The (EmptyRectangle)Shape!?: ";
    cin >> width;


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            /*
                @brief: I forgot to use (height - 1) and (width - 1).
                
                @note: But, Since, The Loop Never Reaches To The Final Variable Values.    
                Therefore, I had to use (one values less than height & width).
            */
            if ((i == 0 || i == (height - 1) || (j == 0 || j == (height - 1))))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
