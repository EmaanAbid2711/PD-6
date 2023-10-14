#include<iostream>
using namespace std;

float calculateStudioPrices(string month, int stay);
float calculateApartmentPrices(string month, int stay);

main()
{
    string month;
    int numberofstays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberofstays;
    float result2 = calculateApartmentPrices( month, numberofstays);
    cout<<"Apartment: "<<result2<<"$."<<endl;
    float result1 = calculateStudioPrices( month, numberofstays);
    cout<<"Studio: "<<result1<<"$.";
}
float calculateStudioPrices(string month, int stay)
{   float price;
    if((month == "May" || month == "October") && (stay <= 7))
    {
        price = stay * 50;
    }
    else if((month == "May" || month == "October") && (stay > 7 && stay <= 14))
    {
        price = (stay * 50) * 0.95;
    }
    else if((month == "May" || month == "October") && (stay > 14))
    {
         price = (stay * 50) * 0.70;
    }
    else if((month == "June" || month == "September") && (stay <= 14))
    {
        price = (stay * 75.20);
    }
    else if((month == "June" || month == "September") && (stay > 14))
    {
        price = (stay * 75.20) * 0.80;
    }
    else if(month == "July" || month == "August")
    {
        price = stay * 76 ;
    }
    return price;
}
float calculateApartmentPrices(string month, int stay)
{
    float price;
    if((month == "May" || month == "October") && (stay <= 14))
    {
        price = stay * 65;
    }
    if((month == "May" || month == "October") && (stay > 14))
    {
        price = (stay * 65) * 0.90;
    }
    if((month == "June" || month == "September") && (stay <= 14))
    {
        price = stay * 68.70;
    }
    if((month == "June" || month == "September") && (stay > 14))
    {
        price = (stay * 65) * 0.90;
    }
    if((month == "July" || month == "August") && (stay <= 14))
    {
        price = stay * 77;
    }
    if((month == "July" || month == "August") && (stay > 14))
    {
        price = (stay * 65) * 0.90;
    }
    return price;
}