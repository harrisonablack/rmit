#include <iostream>
#include "CinemaBooking.h" 

int main()
{
   /* *** Code provided for you to test as you develop your code *** */
   
    CinemaBooking bookingSystem;

    std::cout << "Total available seats: " << bookingSystem.getAvailableSeats() << std::endl;
    std::cout << "Total booked seats: " << bookingSystem.getBookedSeats() << std::endl;

    bookingSystem.bookSeats(50);
    bookingSystem.bookSeats(30);

    std::cout << "Total available seats: " << bookingSystem.getAvailableSeats() << std::endl;
    std::cout << "Total booked seats: " << bookingSystem.getBookedSeats() << std::endl;

    return EXIT_SUCCESS;
}
