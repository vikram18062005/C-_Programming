#include <iostream>
using namespace std;
class Demo
{
    public:
        int i;   //Characteristics
        float f;  //Characteristics 

        
        Demo()   //constructor
        {
            cout<<"inside constructor\n";
            i=0;
            f=0.0f;
        }


        ~Demo()   //destructor
        {
            cout<<"inside destructor\n";
        }


        void fun()    //Behavior
        {
            cout<<"inside fun\n";
        }

};


int main()
{
    cout<<"inside main\n";
    Demo dobj;       //object creation
    cout<<dobj.i<<"\n";  //0
    dobj.fun();

    cout<<"end of main\n";

    return 0;
}