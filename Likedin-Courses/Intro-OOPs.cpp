#include <iostream>
using namespace std;

/*
    @Quesn: What is MODELLING -? 

    @brief: In object-oriented programming, 
            - Modeling involves representing real-world entities.
            - And, their interactions in a software system using classes and objects. 
            - C++ is an object-oriented programming language that supports the principles of OOP. 
            - Here are some key Concepts related to modeling in C++ OOP:
*/

class car
{
    public:
    /* Car: For sales, All these Variables are related to Sales of Car. */
    int     price;
    int     model; 
    int     seats; 
    int     mileg; 

    /* For Rideshare: */
    int     passngrs;
    int     trunksze;

    /* For Parking: */
    int     size; 
};


/*
    @Quesn: What is ENCAPSULATION -? 
    @brief: Encapsulation is the bundling of data (attributes) 
            - And, the methods that operate on the data into a single unit (class). 
            - It hides the internal implementation details from the outside world.
*/

class BankAccount 
{
    private:
    double balance;

    public:
    void deposit(double amount) 
    {
        BankAccount::balance += amount;
    }

    double getBalance() 
    {
        return balance;
    }
};


/*
    @brief: Class Contains variables of Two Types: Data & Functions. 
    "BankAccount acc1;" ---> Instance.
    "acc1.balance" ---> Data.
    "acc1.getBalance()" ---> Function.
*/

/* @brief: The Below is an Example of Public Inheritance: */
class basePublic 
{
    public:
        int publicVar;
        void publicFunction()
        {
            cout << "Public Parent Function!." << endl;
        }

};


/*
    1. Public:
        - Members declared as public are accessible from outside the class through an object of the class.
        - Public members can be accessed by any function or object.
*/

class derivedClsX : public basePublic 
{
    public:
        void derivedFunc()
        {
            cout << "Derived Function!" << endl;
        }
};



/* @brief: The Below is an Example of Private Inheritance: */
/* 
    2. Private:
        - Members declared as private are only accessible within the class.
        - Private members cannot be accessed directly from outside the class.
*/
class derivedClsY : private basePublic 
{
    public: 
        void derivedFuncPrivate()
        {
            cout << "Derived Private Functions!." << endl;
        }
};



/*
   3. Protected:
        - Members declared as protected are accessible within the class and by derived classes.
        - Protected members are similar to private members but can be accessed by derived classes.
*/

class derivedClsZ : protected basePublic {
    public:
        void derivedFuncProtected()
        {
            cout << "Derived Protected Function!." << endl;
        }
};


int main(int argc, char const *argv[])
{
    cout << "Understanding CPP Functions." << endl;

    BankAccount sbiAcc;
    derivedClsX dervClsX;
    derivedClsY dervClsY;
    derivedClsZ dervClsZ;

    cout << endl;
    cout << "--------------------------------" << endl;
    dervClsX.publicFunction();
    dervClsY.derivedFuncPrivate();
    dervClsZ.derivedFuncProtected();
    sbiAcc.deposit(1000);
    cout << "--------------------------------" << endl << endl;

    cout << "Remaining Balance in Account is: " << sbiAcc.getBalance() << "." << endl;

    return 0;
}