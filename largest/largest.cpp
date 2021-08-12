#include<iostream>
using namespace std;
int num(int a, int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int i,b=1, c, maximum;
    int a[10];
    for(i=0;i<=9;i++){
        cout<< "Enter number "<<b<<" :\n";
        cin>>a[i];
        b++;
    }
    maximum = a[0];
    for(c=1;c<=9;c++){
        maximum = num(maximum, a[c]);

    }
    cout<<maximum;
}
