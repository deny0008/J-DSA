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

   cout<<"Size of vector : "<<" "<<value.size();

//    access index

    cout<<endl<<"Access index : "<<" "<<value.at(5);
}
