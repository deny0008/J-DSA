#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    cout<<"Addition is : ";
    return a+b;
}

int main()
{
    cout<<add(10,20);
}