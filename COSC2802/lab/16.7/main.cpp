#include "task.h"
#include "utilities.cpp"

int main()
{
    BookList bookList;

    bookList.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960));
    bookList.addBook(Book("1984", "George Orwell", 1949));
    bookList.addBook(Book("The Catcher in the Rye", "J.D. Salinger", 1951));
    std::cout << bookList.formatBookList();

    bookList.sortByPublicationYear();
    std::cout << bookList.formatBookList();
    std::cout << escapeString(bookList.formatBookList());

    return EXIT_SUCCESS;
}
