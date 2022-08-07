
#include<iostream>
using namespace std;
class psp
{
public:
static void printMsg()
	{
		cout<<"Welcome to Static Member Function!";
	}
};


int main()
{
    psp::printMsg();
}
