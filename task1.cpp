#include<iostream>
using namespace std;

string decideActivity(string temp, string humidity);

main()
{   string temp, humidity, result;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    result = decideActivity(temp, humidity);
    cout<<"Recommended activity: "<<result;
}
string decideActivity(string temp, string humidity)
{   string result;
    if(temp == "warm" && humidity == "dry")
    {
        result = "Play tennis";
    }
    if(temp == "warm" && humidity == "humid")
    {
        result = "Swim";
    }
    if(temp == "cold" && humidity == "dry")
    {
        result = "Play basketball";
    }
    if(temp == "cold" && humidity == "humid")
    {
        result = "Watch TV";
    }
    return result;
}