#include<iostream>
using namespace std;
class Parent
{
    public:
    virtual void show()
    {
        cout<<"Parent Class"<<endl;
    }
};

class child1 : public Parent
{
    public:
    void show()
    {
        cout<<"Child 1 Class"<<endl;
    }
};

class child2 : public Parent
{
    public:
    void show()
    {
        cout<<"Child 2 Class"<<endl;
    }
};


int main()
{
    Parent *ptr[5];
    int op,i;
    cout<<"Enter 1) Parent Class 2) Child1 Class 3) Child2 Class:"<<endl;
    for(int i = 0; i<5;i++)
    {
        cin >> op;
        if(op==1)
            ptr[i]= new Parent;
        else if(op==2)
            ptr[i]==new child1;
        else
            ptr[i]==new child2;
    }
    for(int i = 0; i<5;i++)
    {
        ptr[i]->show();
    }
    return 0;
}