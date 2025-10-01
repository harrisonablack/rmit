#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Book
{
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(const std::string &title, const std::string &author, int publicationYear);
    std::string getTitle() const;
    std::string getAuthor() const;
    int getPublicationYear() const;
    bool operator<(const Book &other) const;
};

class BookList
{
public:
    std::vector<Book> books;
    void addBook(const Book &book);
    void sortByPublicationYear();
    std::string formatBookList() const;
};

#endif
