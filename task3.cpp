#include<iostream>
using namespace std;

string findZodicSign(int day, string month);

main()
{   int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of brith (e.g.,January, Feburary): ";
    cin>>month;
    string sign=findZodicSign(day, month);
    cout<<"Zodic Sign: "<<sign;
}
string findZodicSign(int day, string month)
{
    string sign = "dsd";
    if(month == "March" || month == "April" )
    {
        if(day >=21 || day <= 19)
        {
             sign="Aries";
        }
    }
        if(month == "April" || month == "May" )
    {
        if(day >=20 || day <= 20)
        {
             sign="Taurus";
        } 
    }
            if(month == "May" || month == "June" )
    {
        if(day >=21 || day < 20)
        {
             sign="Gemini";
        } 
    }
            if(month == "June" || month == "July" )
    {
        if(day >=21 || day <= 22)
        {
             sign="Cancer";
        } 
    }
            if(month == "July" || month == "August" )
    {
        if(day >=23 || day <= 22)
        {
             sign="Leo";
        } 
    }
            if(month == "August" || month == "September" )
    {
        if(day >=23 || day <= 22)
        {
             sign="Virgo";
        } 
    }
        if(month == "September" || month == "October" )
    {
        if(day >=23 || day <= 22)
        {
             sign="Libra";
        } 
    }
                if(month == "october" || month == "November" )
    {
        if(day >=23 || day <= 21)
        {
             sign="Scorpio";
        } 
    }
                if(month == "November" || month == "December" )
    {
        if(day >=22 || day <= 21)
        {
             sign="Sagittarius";
        } 
    }
            if(month == "January" || month == "December" )
    {
        if(day >=22 || day <= 19)
        {
             sign="Capricorn";
        } 
    }
            if(month == "January" || month == "February" )
    {
        if(day >=20 || day <= 18)
        {
             sign="Aquarius";
        } 
    }
            if(month == "February" || month == "March" )
    {
        if(day >=19 || day <= 20)
        {
             sign="pisces";
        } 
    }
    return sign;
}