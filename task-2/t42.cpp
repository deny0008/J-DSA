#include<iostream>
#include<vector>
using namespace std;

template<typename T>
T largestnumber(vector<T> n)
{
   int large = n[0];

   for (int i = 0; i < n.size(); i++)
   {
      if(n[i]> large)
    {
        large = n[i];
    }
   }
   
    return large;
}

int main()
{
    vector<int> number;
    number.push_back(10);
    number.push_back(20);
    number.push_back(50);
    number.push_back(30);
    
    cout<<"Largest number is : " << largestnumber(number);  
}