#include <include/Expense.h>
#include<sstream>

Expense::Expense(std::string desc, double amt, std::string date):description(desc), amount(amt), date(date) {}

std::string Expense::getDescription() const
{
    return description;
}

double Expense::getAmount() const
{
    return amount;
}

std::string Expense::getDate() const
{
    return date;
}

// Convert to string to store in file (e.g., "Dinner,50.0,2025-05-13")
std::string Expense::toString() const 
{
    std::stringstream ss;
    ss << description << ',' << amount << ',' << date;
    return ss.str();
}
