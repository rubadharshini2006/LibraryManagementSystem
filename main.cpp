#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int bookId;
    string title;
    string author;
    bool available;
};

int main()
{
    Book b;
    int choice;
    bool added = false;

    do
    {
        cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display Book\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:

            cout << "\nEnter Book ID: ";
            cin >> b.bookId;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, b.title);

            cout << "Enter Author Name: ";
            getline(cin, b.author);

            b.available = true;
            added = true;

            cout << "\nBook Added Successfully!\n";
            break;

        case 2:

            if(added)
            {
                cout << "\n===== Book Details =====\n";
                cout << "Book ID   : " << b.bookId << endl;
                cout << "Title     : " << b.title << endl;
                cout << "Author    : " << b.author << endl;

                if(b.available)
                    cout << "Status    : Available" << endl;
                else
                    cout << "Status    : Issued" << endl;
            }
            else
            {
                cout << "\nNo Book Found!\n";
            }

            break;

        case 3:

            if(added)
            {
                int searchId;

                cout << "\nEnter Book ID: ";
                cin >> searchId;

                if(searchId == b.bookId)
                {
                    cout << "\nBook Found!\n";
                    cout << "Title  : " << b.title << endl;
                    cout << "Author : " << b.author << endl;
                }
                else
                {
                    cout << "\nBook Not Found!\n";
                }
            }
            else
            {
                cout << "\nNo Book Found!\n";
            }

            break;

        case 4:

            if(added)
            {
                if(b.available)
                {
                    b.available = false;
                    cout << "\nBook Issued Successfully!\n";
                }
                else
                {
                    cout << "\nBook Already Issued!\n";
                }
            }
            else
            {
                cout << "\nNo Book Found!\n";
            }

            break;

        case 5:

            if(added)
            {
                if(!b.available)
                {
                    b.available = true;
                    cout << "\nBook Returned Successfully!\n";
                }
                else
                {
                    cout << "\nBook is Already Available!\n";
                }
            }
            else
            {
                cout << "\nNo Book Found!\n";
            }

            break;

        case 6:

            cout << "\nThank You for Using Library Management System!\n";
            break;

        default:

            cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
