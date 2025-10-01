#include "dates.h"
#include <ctime>

int compareDates(const std::string& date1, const std::string& date2) {
	int yeara, yearb, montha, monthb, daya, dayb;

	yeara = std::atoi(date1.substr(0,3).c_str());
	yearb = std::atoi(date2.substr(0,3).c_str());

	montha = std::atoi(date1.substr(5,6).c_str());
	monthb = std::atoi(date2.substr(5,6).c_str());

	daya = std::atoi(date1.substr(8,9).c_str());
	dayb = std::atoi(date2.substr(8,9).c_str());

	if (yeara < yearb) {
		return 1;
	} else if (yearb < yeara) {
		return -1;
	} else if (yeara == yearb) {
			
		if (montha < monthb) {
			return 1;
		} else if (monthb < montha) {
			return -1;
		} else if (montha == monthb) {

			if (daya < dayb) {
				return 1;
			} else if (dayb < daya) {
				return -1;
			} else {
				return 0;
			}
		}
	}



	return 0;
}
