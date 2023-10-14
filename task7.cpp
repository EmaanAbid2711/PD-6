#include<iostream>
using namespace std;

string checkStudentStatus(int hrs, int min, int shrs, int smin);

main()
{   int hrs, min, shrs, smin;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>hrs;
    cout<<"Enter Exam Strating Time (minutes): ";
    cin>>min;
    cout<<"Enter Student hour of arrival: ";
    cin>>shrs;
    cout<<"Enter Student minutes of arrival: ";
    cin>>smin;
    string result =  checkStudentStatus( hrs,  min,  shrs,  smin);
    cout<<result;
}
string checkStudentStatus(int hrs, int min, int shrs, int smin)
{
    int totalex = (hrs * 60) + min;
    int totalss = (shrs * 60) + smin;
    int left = totalex - totalss;
    string time;
    int remainHrs;
    int remainMin;
    if(left >= 0 && left <= 30)
    {
        time = "On time"; 
    } 
    else if(left > 30 && left < 60)
    {
        remainMin = left;
        return "Early\n"+to_string(remainMin)+"minutes before the start";

    }
    else if(left > 60)
    {
        remainHrs = left/60;
        remainMin = left%60;
        return "Early\n"+to_string(remainHrs)+":"+to_string(remainMin)+" hours before the start";
    }
    else if(left < 0)
    {
        left = totalss - totalex;
        remainHrs = left/60;
        remainMin = left%60;
        return "Late\n"+to_string(remainHrs)+":"+to_string(remainMin)+" hours after the start";
    }
}