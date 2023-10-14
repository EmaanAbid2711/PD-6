#include<iostream>
using namespace std;

int calculateVolleyballGames(string type, int holi, int weekends);

main()
{   string type;
    int holi, trip;
    int weekends = 48;
    cout<<"Enter year type: ";
    cin>>type;
    cout<<"Enter number of holidays: ";
    cin>>holi;
    cout<<"Enter number of weekends: ";
    cin>>trip;
    int result =  calculateVolleyballGames( type,  holi,  weekends);
    cout<<result;
}
int calculateVolleyballGames(string type, int holi, int weekends)
{
    float totalWeek, totalHoli, result;
    totalWeek = weekends * (3.0/4.0);
    totalHoli = holi * (2.0/3.0);
    result = totalHoli + totalWeek;
    if(type == "leap")
    {
        result = result*1.15;
    }
    if(type == "normal")
    {
        result == result;
    }
    int answer = result;
    return answer;
}