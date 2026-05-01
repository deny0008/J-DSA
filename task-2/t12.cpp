#include<iostream>
using namespace std;

template<typename T>
T Maximum(T a,T b)
{
    return a >b ? a : b;
}

int main()
{
    cout<<"maximum value : "<<Maximum(100,20);
}