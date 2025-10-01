#include "CinemaBooking.h"

CinemaBooking::CinemaBooking() {
	CinemaBooking::bookedSeats = 0;
}

int CinemaBooking::getMaxCapacity() {
	return CinemaBooking::MAX_CAPACITY;
}

int CinemaBooking::getBookedSeats() {
	return CinemaBooking::bookedSeats;
}

int CinemaBooking::getAvailableSeats(){
	return CinemaBooking::MAX_CAPACITY - CinemaBooking::bookedSeats;
}

bool CinemaBooking::bookSeats(int numSeats){
	if (numSeats <= 0) {
		return false;
	} else if (numSeats <= (MAX_CAPACITY - bookedSeats)) {
		bookedSeats += numSeats;
		return true;
	} else {
		return false;
	}
}
