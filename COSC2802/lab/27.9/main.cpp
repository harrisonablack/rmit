#include <iostream> 
#include "task.h"
#include "utilities.cpp"
 

int main()
{
    std::string filename = "books.txt";  
    std::vector<std::string> books, authors;
    readBooks(filename, books, authors);
    print_1D_vector(books);
    print_1D_vector(authors);

    std::string book = "To_Kill_a_Mockingbird";  
    std::string author = "Harper_Lee";           
    if (isBookInLibrary(books, authors, book, author))
    {
        std::cout << "The book is in the library's collection.\n";
    }
    else
    {
        std::cout << "The book is not in the library's collection.\n";
    }

    return EXIT_SUCCESS;
}
