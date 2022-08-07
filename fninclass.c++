#include <iostream>
using namespace std;
class Room{
    public:
        double lgth;
        double bdth;
        double hght;

    double calA(){
        return lgth*bdth;

    }
    double calculateVol(){
        return lgth*bdth*hght;

    }
};


int main()
{
    Room room1;
    room1.lgth = 42.33;
    room1.bdth = 56.23;
    room1.hght = 23.96;

    cout<<"Area is =   "<<room1.calA()<<endl;
    cout<<"Volume is = "<<room1.calculateVol()<<endl;
    return 0;
    
}