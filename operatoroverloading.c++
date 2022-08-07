#include<iostream>
using namespace std;

class sampleclass
{
    public:
    int length,breadth;
    sampleclass()
    {
        length = 0;
        breadth = 0;
    }
    sampleclass(int x, int y)
    {
        length = x;
        breadth =y;
        cout <<"\n Intial Length & Breadth"<<length<<"'"<<breadth<<endl;
    }

    // Overloading operator to work upon Objects
    void operator()
    {
        length--;
        breadth--;
        cout<<"\n Length & Breadth (Decreased):"<<length<<"'"<<breadth;
    }

    // Overloading + (Binary) Operator

    sampleclass operator + (sampleclass & s2)
    {
        sampleclass s3;
        s3.length =   breadth + s2.length;
        s3.breadth =  breadth + s2.breadth;
        return s3;
    }
};

int main()
{
    sampleclass s1 (7,8);
    sampleclass s2 (9,14);

    // Using-(Unary Operator) with object
    s1;
    s2;

    sampleclass s3;
    s3 = s1 + s2;
    cout <<"\n Total Length & Breadth:"<<s3.length<<":"<<s3.breadth;
    return 0;
}