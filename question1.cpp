#include<iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
       cout<<"\n PRINT-BASE CLASS";

    }
    virtual void show()
    {
        cout<<"\n SHOW-BASE CLASS";
    }

};
class Derived: public Base

{ 
    public:
    void show()
    {
       cout<<"\n SHOW-DERIVED CLASS ";
    }
};
int main()
{

   Base *b=new Derived();

    b->print();

   b->show();
}
