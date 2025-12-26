#include <iostream>
#include <string>
using namespace std;

// Base class 1: Personal Information
class PersonalInfo
{
protected:
    string name;
    int age;

public:
    void inputPersonal()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
};

// Base class 2: Academic Information
class AcademicInfo
{
protected:
    int rollNo;
    float marks;

public:
    void inputAcademic()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }
};

// Derived class: Graduate (Multiple Inheritance)
class Graduate : public PersonalInfo, public AcademicInfo
{
private:
    bool employmentStatus; // 1 = Working, 0 = Non-working

public:
    void inputGraduate()
    {
        inputPersonal();
        inputAcademic();
        cout << "Enter employment status (1 = Working, 0 = Non-working): ";
        cin >> employmentStatus;
        cin.ignore();
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll No: " << rollNo;
        cout << "\nMarks: " << marks;
        cout << "\nEmployment Status: "
             << (employmentStatus ? "Working" : "Non-working") << endl;
    }

    float getMarks()
    {
        return marks;
    }

    bool isWorking()
    {
        return employmentStatus;
    }
};

int main()
{
    const int n = 5;
    Graduate g[n];

    cout << "Enter details of 5 graduates:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nGraduate " << i + 1 << ":\n";
        g[i].inputGraduate();
    }

    // Print working graduates
    cout << "\n--- Working Graduates ---\n";
    for (int i = 0; i < n; i++)
    {
        if (g[i].isWorking())
            g[i].display();
    }

    // Print non-working graduates
    cout << "\n--- Non-working Graduates ---\n";
    for (int i = 0; i < n; i++)
    {
        if (!g[i].isWorking())
            g[i].display();
    }

    // Find top scorer
    int topIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (g[i].getMarks() > g[topIndex].getMarks())
            topIndex = i;
    }

    cout << "\n--- Top Scorer ---\n";
    g[topIndex].display();

    // Calculate average marks
    float total = 0;
    for (int i = 0; i < n; i++)
        total += g[i].getMarks();

    cout << "\nAverage Marks: " << total / n << endl;

    // Percentage of non-working first division (marks ≥ 60)
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!g[i].isWorking() && g[i].getMarks() >= 60)
            count++;
    }

    float percentage = (count * 100.0) / n;
    cout << "\nPercentage of non-working first division graduates: "
         << percentage << "%" << endl;

    return 0;
}
