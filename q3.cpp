#include <iostream>

using namespace std;

class Employee{
    public:
    int emp_id;
    string name;
    float salary;
    static int count;
    
    Employee(int i, string n, float s){
        this->emp_id=i;
        this->name=n;
        this->salary=s;
        count++;
    }
    void display(){
        cout<< name<< "\n"<< salary<< endl;
    }
};

int Employee::count=0;

int main(){
    Employee e1=Employee(23, "rupesh", 23523.3);
    Employee e2=Employee(21,"The9st", 23532.3);
    e1.display();
    cout<< e1.count << "\n"<< e2.count<< endl;
    return 0;
}