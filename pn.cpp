#include <iostream>
using namespace std;
int main()
{   int sign = 0;
    int data =0;
    cout<<"Enter the Number:"<<endl;
    cin>>data;
    sign = (data>0) - (data<0);
    if(sign = 1)
    
        cout<<"Number is +ve";
    
    else if (sign==-1)
        cout<<"Number is -ve"; 
        

    else
        cout<<"Number is Zero";
    return 0;
}