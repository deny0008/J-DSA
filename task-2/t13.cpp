#include<iostream>
using namespace std;

template<class T>
class Student
{
    public:
    T firstname;
    T lastname;
   
};

int main()
{
    Student<string> S1;
    S1.firstname = "raj";
    S1.lastname = "Gadhavi";

    cout<<S1.firstname<<" "<<S1.lastname;
}