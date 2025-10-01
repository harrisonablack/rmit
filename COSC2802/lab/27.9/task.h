#ifndef TASK_H
#define TASK_H

#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

void readBooks(const std::string& filename, std::vector<std::string>& books, std::vector<std::string>& authors);
bool isBookInLibrary(const std::vector<std::string>& books, const std::vector<std::string>& authors, const std::string& book, const std::string& author);

#endif // TASK_H
