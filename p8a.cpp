#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int bookId;
    string title;
    string author;
    float price;

    // Function to input book details
    void inputDetails()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cin.ignore(); // Clear input buffer

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\nBook ID   : " << bookId;
        cout << "\nTitle     : " << title;
        cout << "\nAuthor    : " << author;
        cout << "\nPrice     : " << price << endl;
    }
};

int main()
{
    int n;

    // Ask the user number of books
    cout << "Enter number of books: ";
    cin >> n;

    // Create a single Book variable
    Book singleBook;
    cout << "\nEnter details for single book:\n";
    singleBook.inputDetails();

    // Display single book details
    cout << "\nSingle Book Details:";
    singleBook.displayDetails();

    // Create an array of Book objects
    Book books[n];

    // Input details for each book
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Book " << i + 1 << ":\n";
        books[i].inputDetails();
    }

    // Display all book details
    cout << "\nDisplaying all book details:\n";
    for (int i = 0; i < n; i++)
    {
        books[i].displayDetails();
    }

    return 0;
}
