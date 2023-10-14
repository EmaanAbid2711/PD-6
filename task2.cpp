#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float per);

main()
{
    string name;
    float eng, math, chem, ss, bio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks of English: ";
    cin>>eng;
    cout<<"Enter marks of Maths: ";
    cin>>math;
    cout<<"Enter marks of Chemistry: ";
    cin>>chem;
    cout<<"Enter marks of Social Science: ";
    cin>>ss;
    cout<<"Enter marks of Biology: ";
    cin>>bio;
    cout<<"Student Name: "<<name<<endl;
    float per=calculateAverage( eng, math, chem,  ss, bio);
    cout<<"Percentage: "<<per<<"%"<<endl;
    string result= calculateGrade(per);
    cout<<"Grade: "<<result;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float percent = ((marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)/500)*100;
    return percent;
}

string calculateGrade(float per)
{
    string grade;
    if(per == 100 && per >= 90)
    {
        grade = "A+";
    }
    if(per >= 80 && per < 90)
    {
        grade = "A";
    }
    if(per >=70 && per < 80)
    {
        grade = "B+";
    }
    if(per >= 60 && per < 70)
    {
        grade = "B";
    }
    if(per >=50 && per < 60)
    {
        grade = "C";
    }
    if(per >=40 && per < 50)
    {
        grade = "D";
    }
    if(per < 40)
    {
        grade = "F";
    }
    return grade;
}