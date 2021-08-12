#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Enter two numbers and I tell you the maximum number of the two: \n";
    cout<< "Enter the first Number: \n";
    cin>> a;
    cout<< "Enter the second Number: \n";
    cin>> b;
    if(a > b){
        cout<<a<<" Is the maximum number:\n";
    }
    else if(a < b){
        cout<<b<< " Is the maximum number:\n";
    }
    else{
        cout<<a<<" Is equal to "<<b<<" hence their is no maximum number:\n";
    }
}
