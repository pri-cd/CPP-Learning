#include <iostream>
using namespace std;


void fibonacci(int num);

int main(int argc, char const *argv[])
{

    int num = 0;
    cout << "Enter Number of Fibinacci Numbers You Wish TO Generate!?: ";
    cin >> num;

    fibonacci(num);
    return 0;
}

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0; 

    for (int i = 1; i < n; i++)
    {
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}