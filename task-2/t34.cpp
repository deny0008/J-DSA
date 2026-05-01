#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> value;

    value.push_back(100);
    value.push_back(5);
    value.push_back(30);
    value.push_back(11);
    value.push_back(85);

     for(int i=0;i<value.size()/2;i++)
    {
        int temp=value[i];
        value[i]=value[value.size()-1-i];
        value[value.size()-1-i]=temp;
    }

    for (int i : value)
    {
        cout << i << " ";
    }
}
