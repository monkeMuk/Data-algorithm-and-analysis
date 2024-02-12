#include <iostream>
#include <string>

using namespace std;

// Struct to represent the published date
struct Date {
    int day;
    int month;
    int year;
};

// Struct to represent a book
struct Book {
    string title;
    string publisherName;
    string ISBN;
    double costPrice;
    double sellingPrice;
    double discountPercentage;
    double profit;
    double discountedPrice;
    Date publishedDate;
};

// Function to prompt users to fill out the book information
void fillBookInformation(Book& book) {
    cout << "ISBN Number: ";
    cin >> book.ISBN;

    cout << "Title: ";
    cin.ignore();
    getline(cin, book.title);

    cout << "Publisher: ";
    getline(cin, book.publisherName);

    cout << "Published date (day month year): ";
    cin >> book.publishedDate.day >> book.publishedDate.month >> book.publishedDate.year;

    cout << "Cost price (RM): ";
    cin >> book.costPrice;

    cout << "Discount given (RM): ";
    cin >> book.discountedPrice;

    // Calculate profit
    book.profit = book.sellingPrice - book.costPrice;

    // Calculate discounted price
    book.discountedPrice = book.sellingPrice - book.discountedPrice;
}

// Function to display book details
void displayBookDetails(const Book& book, const string& categoryName) {
    cout << "Book category: " << categoryName << endl;
    cout << "ISBN Number: " << book.ISBN << endl;
    cout << "Title: " << book.title << endl;
    cout << "Publisher: " << book.publisherName << endl;
    cout << "Published date: " << book.publishedDate.day << "/" << book.publishedDate.month << "/" << book.publishedDate.year << endl;
    cout << "Cost price (RM): " << book.costPrice << endl;
    cout << "Discount given (RM): " << book.discountedPrice << endl;
    cout << "Profit (RM): " << book.profit << endl;
    cout << "...\n";  // Add more book details if needed
}

int main() {
    Book fictionBook;
    string categoryName = "Fiction";

    cout << "Fill out the form for " << categoryName << " books:\n";
    fillBookInformation(fictionBook);

    // Display book details
    displayBookDetails(fictionBook, categoryName);

    return 0;
}