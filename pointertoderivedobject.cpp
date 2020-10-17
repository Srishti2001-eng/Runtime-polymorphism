#include<iostream>
using namespace std;

class BC
{
    public:
    int b;
    void show()
    {
        cout<<"b="<<b<<endl;
    }
};
class DC:public BC
{
    public:
    int d;
    void show()
    {
        cout<<"b="<<b<<endl;
        cout<<"d="<<d<<endl;
    }
};

int main()
{
    BC*bptr;
    BC base;
    bptr=&base;
    bptr->b=100;
    cout<<"bptr pointd to base object\n";
    bptr->show();
    DC derived;
    bptr=&derived;
    bptr->b=200;
    cout<<"bptr pointd to derived object\n";
    bptr->show();
    return 0;
}