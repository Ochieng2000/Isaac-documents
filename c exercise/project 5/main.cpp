#include<iostream>
#include<string>

using namespace std;
class student
{
public:
    int RollNumber;
    string Name;
    string Address;
    void PrintDetails(){
        cout<< "Roll number is "<<RollNumber<<"\n";
        cout<< "Name is "<<Name <<"\n";
        cout << "Address is "<<Address<< "\n";
    }
};
main()
{
    student Student1;
    Student1.RollNumber = 1;
    Student1.Name = "Write Name";
    Student1.Address = "MMU";
    Student1.PrintDetails();
    return 0;
}
