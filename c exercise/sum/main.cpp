#include<iostream>
using namespace std;
int main()
{
    int a = 1, b, sum = 0;
    cout<<"Enter the numbers to find their sum: \n";
    while(a<=10){
        cout<< "Enter Number "<<a<< "\n" ;
        cin>>b;
        sum += b;
        a++;

    }
    cout<< "Sum = "<< sum;
}
