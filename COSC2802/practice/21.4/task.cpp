#include "task.h"
#include <cctype>
#include <cstring>

LogSanitizer::LogSanitizer(const char *inputLog) {

	std::strncpy(this->sanitizedLog, inputLog, sizeof(sanitizedLog) -1);

  // while (inputLog[i] != '\0') {
  //   sanitizedLog[i] = inputLog[i];
  //   ++i;
  // }
}

const char *LogSanitizer::sanitizeLog() {
  int i = 0;

  while (sanitizedLog[i] != '\0') {
    if (std::isdigit(sanitizedLog[i])) {
      sanitizedLog[i] = '!';
    } else if (std::tolower(sanitizedLog[i]) == 'a' ||
               std::tolower(sanitizedLog[i]) == 'e' ||
               std::tolower(sanitizedLog[i]) == 'i' ||
               std::tolower(sanitizedLog[i]) == 'o' ||
               std::tolower(sanitizedLog[i]) == 'u') {
      sanitizedLog[i] = '*';
    }
    ++i;
  }

  return &sanitizedLog[0];
}

const char *LogSanitizer::getSanitizedLog() const {
	return &sanitizedLog[0]; 
}
