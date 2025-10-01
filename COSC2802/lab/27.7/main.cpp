#include "task.h"

int main()
{
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Charles Scribner's Sons", "9780743273565");
    Magazine magazine("National Geographic", "Various", 1888, 10);
    std::cout << book.formatDetails();
    std::cout << magazine.formatDetails();

    return EXIT_SUCCESS;
}
