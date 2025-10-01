#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include <sstream>

class LibraryItem {
protected:
    std::string title;
    std::string author;
    int publicationYear;

public:
    LibraryItem(const std::string& title, const std::string& author, int publicationYear);

    std::string getTitle() const;
    void setTitle(const std::string& title);
    std::string getAuthor() const;
    void setAuthor(const std::string& author);
    int getPublicationYear() const;
    void setPublicationYear(int publicationYear);

		virtual std::string formatDetails() const;
};

class Book : public LibraryItem {
private:
    std::string publisher;
    std::string isbn;

public:
    Book(const std::string& title, const std::string& author, int publicationYear,
         const std::string& publisher, const std::string& isbn);

    std::string getPublisher() const;
    void setPublisher(const std::string& publisher);
    std::string getISBN() const;
    void setISBN(const std::string& isbn);

    std::string formatDetails() const override;
};

class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    Magazine(const std::string& title, const std::string& author, int publicationYear, int issueNumber);

    int getIssueNumber() const;
    void setIssueNumber(int issueNumber);

    virtual std::string formatDetails() const override;
};

#endif // TASK_H
