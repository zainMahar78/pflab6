#include <iostream>
using namespace std;
string calculateCost(double budget, string category, int numPeople);
main()
{
    double budget;
    int numPeople;
    string category;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> numPeople;
    cout << calculateCost(budget, category, numPeople);
}

string calculateCost(double budget, string category, int numPeople)
{
    double ticketCost = 0, transportCost = 0;
    if (category == "VIP")
    {
        ticketCost = 499.99 * numPeople;
    }
    if (category == "Normal")
    {
        ticketCost = 249.99 * numPeople;
    }
    if (numPeople >= 1 && numPeople <= 4)
    {
        transportCost = budget * 0.75;
    }
    if (numPeople >= 5 && numPeople <= 9)
    {
        transportCost = budget * 0.60;
    }
    if (numPeople >= 10 && numPeople <= 24)
    {
        transportCost = budget * 0.50;
    }
    if (numPeople >= 25 && numPeople <= 49)
    {
        transportCost = budget * 0.40;
    }
    if (numPeople >= 50)
    {
        transportCost = budget * 0.25;
    }
    double remaining = budget - transportCost;
    if (remaining >= ticketCost){
        remaining -= ticketCost;
        // remaining += 0.000005;
        return "Yes! You have " + to_string(remaining) + " leva left.";
    }
    if (remaining < ticketCost){
        remaining = ticketCost - remaining;
        // remaining += 0.000234;
        return "Not enough money! You need " + to_string(remaining) + " leva.";
    }
}