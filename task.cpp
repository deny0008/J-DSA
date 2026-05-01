#include <iostream>
using namespace std;

template <typename T>
T calculate(T a, T b)
{
    while (true)
    {
        int choice;

        cout <<endl<< "Press 1 : Multiple" << endl;
        cout << "Press 2 : Division" << endl;
        cout << "Press 3 : Exit" << endl;

        cout <<endl<< "Enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout <<endl<< "Multiple = " << a * b << endl;
            break;

        case 2:
            cout <<endl<< "Division = " << a / b << endl;
            break;

        case 3:
            cout<<"Complate--"<<endl;
            return 0;
        default:
            cout << "Invalid choice!!" << endl;
            break;
        }
    }
}

template<typename T>
T prime(T n, T flag)
{
    if(n<=1)
    {
    cout<<"Not Prime"<<endl;
    return 0;
    }
    
        for(int i=2;i<=n/2;i++)
        {
            if(n%i == 0)
            {
                flag=1;
                break;
            }
        }

    if(flag==0)
    {
        cout<<endl<<n<<" is a Prime Number";
    }
    else{
        cout<<endl<<n<<" is Not A Prime number";
    }
}

template<typename T>
T OddEven(T num)
{
    if(num%2==0)
    {
        cout<<endl<<num<<" Is Even Number"<<endl;
    }else{
        cout<<endl<<num<<" Is Odd Number"<<endl;
    }
}

template <typename T>
T Fullname(T firstname, T lastname)
{
    cout<<endl<<"Full name is "<<firstname<<" "<<lastname<<endl;
}

template <class T>
class bio{
    public:
        T firstname;
        T lastname;
        int age;

        void getdata()
        {
            cout<<"Enter First Name : ";
            cin>>firstname;

            cout<<"Enter Last Name : ";
            cin>>lastname;

            cout<<"Enter age : ";
            cin>>age;

        }

        void display()
        {
            cout<<endl<<"Full Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

int main()
{
    while (true)
    {
        cout << endl
             << "----------MENU----------" << endl;

        cout << endl
             << "Press 1 : Calculate" << endl;
        cout << "Press 2 : Prime Number" << endl;
        cout << "Press 3 : Odd/Even Number" << endl;
        cout << "Press 4 : Print Full Name" << endl;
        cout << "Press 5 : Bio Data" << endl;
        cout << "Press 6 : Exit" << endl;

        int choice;
        cout << endl
             << "Select your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int a;
            int b;

            cout <<endl<< "Enter one number : ";
            cin >> a;

            cout <<"Enter two number : ";
            cin >> b;
            calculate(a, b);
            break;
        }
        
        case 2:
        {
            int n;
            int flag;

            cout<<endl<<"Enter number : ";
            cin>>n;

            prime(n,0);
            break;
        }

        case 3:
        {
             int num;
            cout<<endl<<"Enter Number : ";
            cin>>num;

            OddEven(num);
            break;
        }

        case 4:
        {
            string firstname;
            string lastname;

            cout<<"Enter first name : ";
            cin>>firstname;

            cout<<"Enter Last name : ";
            cin>>lastname;

            Fullname(firstname, lastname);
            break;
        }

        case 5:
        {
            bio<string> Bio;

            Bio.getdata();
            Bio.display();
            break;
        }

        default:
        cout<<"Thank You";
            break;
        }
    }
}