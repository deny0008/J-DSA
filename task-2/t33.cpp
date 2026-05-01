#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> value;

    value.push_back(10);
    value.push_back(25);
    value.push_back(3);
    value.push_back(41);
    value.push_back(50);

    for (int i = 0; i < value.size(); i++)
    {
        for (int j = 0; j < value.size() - 1 - i; j++)
        {
            if (value[j] > value[j + 1])
            {
                int temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    for (int i : value)
    {
        cout << i << " ";
    }

    
}
