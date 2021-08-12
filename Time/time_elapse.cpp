#include<iostream>
using namespace std;
int main()
{
    int h,m,s,f,y,z;
    cout<<"Input the elapsed time in the format of Hours elapsed, minutes elapsed and the seconds elapsed.\n";
    cout<< "Enter the hours elapsed\n";
    cin>> h;
    cout<< "Enter the minutes elapsed\n";
    cin>> m;
    cout<< "Enter the seconds elapsed\n";
    cin>> s;
    f = h*3600;
    y = m*60;
    z = f + y + s;
    cout<< "The elapsed time in seconds is given by : "<<z<<" Seconds"<< endl;
}
