#include <iostream>
#include <string>
#include "dates.h"

int main() {
    std::string date1 = "2024-02-14";
    std::string date2 = "2024-02-15";

    int result = compareDates(date1, date2);

    if (result == 1) {
        std::cout << date1 << " comes before " << date2 << std::endl;
    } else if (result == 0) {
        std::cout << date1 << " is the same as " << date2 << std::endl;
    } else {
        std::cout << date1 << " comes after " << date2 << std::endl;
    }

    return EXIT_SUCCESS;
}
