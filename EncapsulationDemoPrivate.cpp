#include <iostream>
using namespace std;


//Encapsulation
class Marvellous
{

   //Access specifier (By default private)
    int No1,No2;   //Characteristics

    void Fun()    //Behaviour
    {
        cout<<"Insisde Fun\n";
    }

    void Gun()   //Behaviour
    {

        cout<<"Inside Gun\n";
    }
};
int main()
{

    //Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8

    cout<<mobj1.No1<<"\n"; //error

    mobj1.Fun();   //error
    mobj2.Fun();   //errpr
    mobj1.Gun();   //error

    


    return 0;
}