#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    string designation;
    float basicSalary;

    // Function to input employee details
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore(); // Clear buffer

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to display employee details
    void displayDetails()
    {
        cout << "\nEmployee ID     : " << empId;
        cout << "\nName            : " << name;
        cout << "\nDesignation     : " << designation;
        cout << "\nBasic Salary    : " << basicSalary << endl;
    }
};

int main()
{
    int n;

    // Ask the user for number of employees
    cout << "Enter number of employees: ";
    cin >> n;

    // Create a single Employee variable
    Employee singleEmployee;
    cout << "\nEnter details for single employee:\n";
    singleEmployee.inputDetails();

    // Display single employee details
    cout << "\nSingle Employee Details:";
    singleEmployee.displayDetails();

    // Create an array of Employee objects
    Employee employees[n];

    // Input details for all employees
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].inputDetails();
    }

    // Display details of all employees
    cout << "\nDisplaying all employee details:\n";
    for (int i = 0; i < n; i++)
    {
        employees[i].displayDetails();
    }

    return 0;
}
