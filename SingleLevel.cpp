#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i=0;
            j=0;
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

};

class Derived : public Base
{
    public:
       int x;

       Derived()
       {
            cout<<"Inside Derived constructor\n";
            x=0;
       }

       ~Derived()
       {
            cout<<"Inside Derived destructor\n";
       }

       void gun()
       {
            cout<<"Inside gun of Derived\n";

       }

};

int main()
{
    cout<<"Inside main\n";

    Base bobj;

   // Derived dobj;

    return 0;
}