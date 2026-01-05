#include <iostream>

using namespace std;

class Account{
    public: 
    int a;
    float salary=60000;
};

class Programmer: public Account{
    public:
    float bonus=5000;
};

int main(){
    Programmer p1;
    cout<< "\n"<< p1.salary<< "\n"<< p1.bonus;
    return 0;
}