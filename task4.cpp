#include<iostream>
using namespace std;

float service(char code, char time, int min);
string Code(char code);

main()
{   char code, time;
    int min;
    float result; 
    string result1;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    if(code == 'p'|| code == 'P'){
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>>time;}
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    result1= Code( code);
    cout<<"Service Type: " <<result1<<endl;
    cout<<"Total Minutes Used: "<<min<<" minutes "<<endl;
    result = service(code,time,min);
    cout<<"Amount Due: $"<<result;
}
float service(char code, char time, int min)
{   float result;
    if(code == 'r' || code == 'R')
    {
        result = 10;
        if(min > 50 )
        {
            result = ((min - 50 ) * 0.20)+10;
        }
        return result;
    }
    if(code == 'p' || code == 'P')
    {   result = 25;
        if((time == 'D' || time == 'd') && min > 75)
        {
            result = ((min - 75) * 0.10)+25;
        }
        if((time == 'N' || time == 'n') && min > 100)
        {
            result = ((min - 100) * 0.05)+25;
        }
        return result;
    }
    else
    {
        return result = 'Error';
    }
    return result;
}
string Code(char code)
{
    string result1 = "Regular";

    if( code == 'p' || code == 'P')
    {
        result1 = "Premium";
    }
    return result1;
}
