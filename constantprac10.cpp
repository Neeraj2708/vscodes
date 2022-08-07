#include <iostream>
using namespace std;
class test{
    public:
      const int constant;
      test(int x): constant(x)
      {
        cout<<"The value of x:"<<x<<endl;
      }
};

int main(){
    test t1(29);
    cout<<"Value of data emmber constant:"<<t1.constant<<endl;
    test t2(38);
    cout<<"Value of constant data member"<<t2.constant<<endl;
    int sum=t1.constant+t2.constant;
    cout<<"Sum of constants:"<<sum<<endl;
    return 0;
}