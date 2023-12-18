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
        deposit += amount;
    }

    double getBalance() 
    {
        return balance;
    }
};



/*
    @Quesn: What is INHERITANCE -? 
    @brief: 
            - Inheritance allows a class (subclass/derived class) to inherit the properties 
            - And, behaviors of another class (base class/parent class). 
            - It promotes code reusability.
            - Derived classes can extend or override the functionality of the base class.
*/

int main(int argc, char const *argv[])
{
    cout << "Understanding CPP Functions." << endl;
    return 0;
}
