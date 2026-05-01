#include<iostream>
#include<vector>
using namespace std;

template<typename T>
T Fullname(vector<T> student)
{
   

    for (T i : student)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    vector<string> name;
    name.push_back("raj");
    name.push_back("Rank");

    Fullname(name);
}