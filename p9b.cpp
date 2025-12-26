#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float basicSalary;
    float grossSalary;

    static int count;   // Static member to count employees

public:
    // Parameterized constructor using this keyword
    Employee(int empId, string name, float basicSalary)
    {
        this->empId = empId;
        this->name = name;
        this->basicSalary = basicSalary;
        calculateGrossSalary();
        count++;   // Increment count when object is created
    }

    // Function to calculate gross salary
    void calculateGrossSalary()
    {
        grossSalary = basicSalary + (0.20 * basicSalary) + (0.10 * basicSalary);
    }

    // Function to display employee details
    void displayDetails()
    {
        cout << "\nEmployee ID   : " << empId;
        cout << "\nName          : " << name;
        cout << "\nBasic Salary  : " << basicSalary;
        cout << "\nGross Salary  : " << grossSalary << endl;
    }

    // Static function to show total employee count
    static void showCount()
    {
        cout << "\nTotal number of employees created: " << count << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee object destroyed" << endl;
    }
};

// Definition of static member
int Employee::count = 0;

int main()
{
    // Create multiple Employee objects
    Employee e1(101, "Ramesh", 30000);
    Employee e2(102, "Suresh", 40000);
    Employee e3(103, "Mahesh", 50000);

    // Display employee details
    e1.displayDetails();
    e2.displayDetails();
    e3.displayDetails();

    // Call static function
    Employee::showCount();

    // Destructor messages observed at program end
    return 0;
}

