#include<iostream>
using namespace std;
class A {
    private: 
    int a;

    public:
    explicit A (int x )
    {
        a = x;
    }

    void show()
    {
        cout<<"a : "<<a<<endl;
    }
};

int main()
{
    A ob1(1);
    ob1.show();
    int n = 2;
    return 0;
}