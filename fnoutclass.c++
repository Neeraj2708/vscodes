#include <iostream>
#include <conio.h>
using namespace std;

class Hey{
private:
    int a,b;
public:
    void Add();
};

void Hey::Add()
{ 
    cout<<"Enter Two Numbers:"<<endl;
    cin>>a>>b;
    cout<<"Output is = "<<a+b<<endl;
}

int main()
{
    Hey ob;
    ob.Add();
    return 0;
    getch();
}
