#ifndef CINEMA_BOOKING_H
#define CINEMA_BOOKING_H

#include <iostream>

class CinemaBooking {
private:
    static const int MAX_CAPACITY = 100; // Maximum capacity for the cinema show
    static int bookedSeats; // Static class variable to track the total booked seats

public:
    CinemaBooking();
    int getAvailableSeats();
    int getBookedSeats();
    int getMaxCapacity();
    bool bookSeats(int numSeats);
};

#endif // CINEMA_BOOKING_H
