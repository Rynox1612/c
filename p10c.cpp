#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;
};

// Derived class
class Student : public Person
{
protected:
    int rollNo;
    float marks;
};

// Derived class
class Graduate : public Student
{
    bool working; // 1 = Working, 0 = Non-working

public:
    void input()
    {
        cout << "\nEnter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "Employment Status (1 = Working, 0 = Non-working): ";
        cin >> working;

        cin.ignore();
    }

    void display()
    {
        cout << left
             << setw(15) << name
             << setw(10) << age
             << setw(10) << rollNo
             << setw(10) << marks
             << setw(15) << (working ? "Working" : "Non-working")
             << endl;
    }

    float getMarks()
    {
        return marks;
    }

    bool isWorking()
    {
        return working;
    }
};

int main()
{
    const int n = 5;
    Graduate g[n];

    cout << "===== ENTER DETAILS OF GRADUATES =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nGraduate " << i + 1 << ":";
        g[i].input();
    }

    cout << "\n===== WORKING GRADUATES =====\n";
    cout << left
         << setw(15) << "Name"
         << setw(10) << "Age"
         << setw(10) << "RollNo"
         << setw(10) << "Marks"
         << setw(15) << "Status"
         << endl;

    for (int i = 0; i < n; i++)
        if (g[i].isWorking())
            g[i].display();

    cout << "\n===== NON-WORKING GRADUATES =====\n";
    cout << left
         << setw(15) << "Name"
         << setw(10) << "Age"
         << setw(10) << "RollNo"
         << setw(10) << "Marks"
         << setw(15) << "Status"
         << endl;

    for (int i = 0; i < n; i++)
        if (!g[i].isWorking())
            g[i].display();

    int top = 0, nonWorkFirst = 0;
    float totalMarks = 0;

    for (int i = 0; i < n; i++)
    {
        totalMarks += g[i].getMarks();

        if (g[i].getMarks() > g[top].getMarks())
            top = i;

        if (!g[i].isWorking() && g[i].getMarks() >= 60)
            nonWorkFirst++;
    }

    cout << "\n===== TOP SCORER =====\n";
    cout << left
         << setw(15) << "Name"
         << setw(10) << "Age"
         << setw(10) << "RollNo"
         << setw(10) << "Marks"
         << setw(15) << "Status"
         << endl;

    g[top].display();

    cout << "\nAverage Marks of Graduates: "
         << totalMarks / n << endl;

    cout << "Percentage of Non-working First Division Graduates: "
         << (nonWorkFirst * 100.0) / n << "%" << endl;

    return 0;
}
