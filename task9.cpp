#include<iostream>
using namespace std;

string checkPointPoition(int height, int x, int y);

main()
{   int height, x, y;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    string result =  checkPointPoition( height,  x,  y);
    cout<<result;
}
string checkPointPoition(int height, int x, int y)
{
    int maxX = height*2;
    int maxY = height*4;
    if((x >= 0 && x<= maxX) && (y >=0 && y <= maxY))
    {
        if(x % height == 0 && y % height == 0)
        {
            return "border";
        }
         if(x == maxX && y == maxY)
        {
            return "border";
        }
        else
        {
            return "Inside";
        }
    }
    
    else
        return "Outside";
}