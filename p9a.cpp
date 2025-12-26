#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;
    float price;

    static int count;   // Static data member

public:
    // Parameterized constructor using this pointer
    Book(int bookId, string title, string author, float price)
    {
        this->bookId = bookId;
        this->title = title;
        this->author = author;
        this->price = price;
        count++;   // Increment count when object is created
    }

    // Destructor
    ~Book()
    {
        cout << "Book object destroyed" << endl;
    }

    // Display book details
    void displayDetails()
    {
        cout << "\nBook ID   : " << bookId;
        cout << "\nTitle     : " << title;
        cout << "\nAuthor    : " << author;
        cout << "\nPrice     : " << price << endl;
    }

    // Static function to display number of objects
    static void showCount()
    {
        cout << "\nTotal number of books created: " << count << endl;
    }
};

// Definition of static data member
int Book::count = 0;

int main()
{
    // Create multiple Book objects
    Book b1(101, "C++ Programming", "Bjarne Stroustrup", 450);
    Book b2(102, "Data Structures", "Mark Allen", 550);
    Book b3(103, "Operating Systems", "Silberschatz", 650);

    // Display all book details
    b1.displayDetails();
    b2.displayDetails();
    b3.displayDetails();

    // Call static function
    Book::showCount();

    // Destructor messages observed at program end
    return 0;
}
