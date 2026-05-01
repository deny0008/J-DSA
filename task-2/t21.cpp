#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> value;

    value.push_back(10);
    value.push_back(20);
    value.push_back(30);
    value.push_back(40);
    value.push_back(50);
    value.push_back(60);
    value.push_back(70);
    value.push_back(80);
    value.push_back(90);
    value.push_back(100);

    cout<<"Print all element"<<endl;
    for(int i : value)
    {
        cout<<i<<endl;
    }

    value.pop_back();
    cout<<endl<<"Remove last element"<<endl;
    for(int i : value)
    {
        cout<<i<<endl;
    }
}
