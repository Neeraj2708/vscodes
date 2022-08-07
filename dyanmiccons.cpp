#include<iostream>
using namespace std;

class integer{
    private:
    int *x; int *y;
    
    public:
    integer(){}
    integer(int x1,int y1)
    {
        x = new int;
        *x = x1;
        y = new int;
        *y = y1;
    }
    void add ()
    {
        int sum =*x+*y;
        cout<<"Sum is : "<<sum<<endl;
    }
};

int main ()
{
    integer t1 (10,20);
    t1.add();
    return 0;
}