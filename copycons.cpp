#include <iostream>
using namespace std;
class student
{
    private:
    int rollno;
    int marks;
    
    public:
    student(int m,int n)
    {   rollno = m;
        marks = n;
    }

    student(student &t);
    void showdata()
    {
        cout<< "Rollno = "<<rollno<<endl;
        cout<< "Marks = "<<marks<<endl;
    }
};


student::student(student &t)
{
    rollno = t.rollno;
    marks = t.marks;
}

int main ()
{
    cout<<"Parameterized Constructor output is = "<<endl;
    student t (30,160);
    t.showdata();
    cout<<"Copy constructor output is = "<<endl;
    
    student stu(t);
    stu.showdata();
    return 0;

}