#include<iostream>
using namespace std;

class facto
{
    private:
    int n;
    long double factorial = 1.0;
    
    
    public:
        void fact();
};

void facto::fact()
{
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
}

int main()
{
    facto fac;
    fac.fact();
    return 0;
    
}