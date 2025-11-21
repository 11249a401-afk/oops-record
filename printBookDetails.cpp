#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
   
    void setDetails(string t, string a, int y);
    void printDetails();
};

void Book::setDetails(string t, string a, int y) {
    title = t;
    author = a;
    year = y;
}

void Book::printDetails() {
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publication Year: " << year << endl;
}

int main() {
    Book myBook;

 
    myBook.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 1925);


    myBook.printDetails();

    return 0;
}
