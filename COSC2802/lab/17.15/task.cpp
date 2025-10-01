#include "task.h"
#include <cctype>

LogSanitizer::LogSanitizer(const char* inputLog){
	int i = 0;

	while (inputLog[i] != '\0') {
		sanitizedLog[i] = inputLog[i];
		++i;
	}
}

const char* LogSanitizer::sanitizeLog(){
	int i = 0;

	do {
		if (isdigit(sanitizedLog[i])) {
			sanitizedLog[i] = '!';
		} else if (isalpha(sanitizedLog[i])) {
			if (
				tolower(sanitizedLog[i]) == 'a' ||
				tolower(sanitizedLog[i]) == 'e' ||
				tolower(sanitizedLog[i]) == 'i' ||
				tolower(sanitizedLog[i]) == 'o' ||
				tolower(sanitizedLog[i]) == 'u'
			) {
				sanitizedLog[i] = '*';
			}
		}
		++i;
	}while (sanitizedLog[i] != '\0');
	return sanitizedLog;
}


const char* LogSanitizer::getSanitizedLog() const {
	return sanitizedLog;
}
