#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string day, double quantity);

main()
{   string fruit, day;
    double quantity;
    float result;
    cout<<"Enter the fruit(banana/apple/...): ";
    cin>>fruit;
    cout<<"Enter day of the week(Monday/TUesday/...): ";
    cin>>day;
    cout<<"Enter the quantity of fruit(a decimal number): ";
    cin>>quantity;
    result = calculateFruitPrice(fruit, day, quantity);
    cout<<"Total price of the fruits: "<<result;
}
float calculateFruitPrice(string fruit, string day, double quantity)
{   float cost;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        cost = 21;
        if(fruit == "banana")
        {
            cost = quantity * 2.50;
        }
        if(fruit == "apple")
        {
            cost = quantity * 1.20;
        }
        if(fruit == "orange")
        {
            cost = quantity * 0.85;
        }
        if(fruit == "grapefruit")
        {
            cost = quantity * 1.45;
        }
        if(fruit == "kiwi")
        {
            cost = quantity * 2.70;
        }
        if(fruit == "pineapple")
        {
            cost = quantity * 5.50;
        }
        if(fruit == "grapes")
        {
            cost = quantity * 3.85;
        }
        return cost;
    }
    if(day == "Saturday" || day == "Sunday")
    {
        cost = 21;
        if(fruit == "banana")
        {
            cost = quantity * 2.70;
        }
        if(fruit == "apple")
        {
            cost = quantity * 1.25;
        }
        if(fruit == "orange")
        {
            cost = quantity * 0.90;
        }
        if(fruit == "grapefruit")
        {
            cost = quantity * 1.60;
        }
        if(fruit == "kiwi")
        {
            cost = quantity * 3.00;
        }
        if(fruit == "pineapple")
        {
            cost = quantity * 5.60;
        }
        if(fruit == "grapes")
        {
            cost = quantity * 4.20;
        }
        return cost;
    }
}