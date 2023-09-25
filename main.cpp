#include <iostream>
#include <vector>
#include <fstream>
#include "Flight.h"
#include "User.h"
#include "Reservation.h"

int main() {
    std::vector<Flight> flights;
    std::vector<User> users;
    std::vector<Reservation> reservations;

    registerFlight(flights, "F001", "New York", "Los Angeles", "2023-07-15 09:00", 50);
    registerFlight(flights, "F002", "Los Angeles", "Chicago", "2023-07-16 13:30", 30);
    registerFlight(flights, "F003", "Chicago", "New York", "2023-07-17 11:15", 20);

    registerUser(users, "Arman", "arman@gmail.com");
    registerUser(users, "Gago", "gago@egmail.com");

    std::vector<Flight> availableFlights = searchFlights(flights, "New York", "Los Angeles", "2023-07-15 00:00");
    if (!availableFlights.empty()) {
        std::cout << "Available flights:\n";
        for (const Flight &flight: availableFlights) {
            std::cout << "Flight Number: " << flight.getFlightNumber() << ", Origin: " << flight.getFlightOrigin()
                      << ", Destination: " << flight.getFlightDestination() << ", Departure Date and Time: "
                      << flight.getDepartureDate() << ", Available Seats: " << flight.getAvailableSeats()
                      << std::endl;
        }
    } else {
        std::cout << "No available flights found.\n";
    }

    bookFlight(flights, users, reservations, "F001", "Arman", "arman@egmail.com");
    bookFlight(flights, users, reservations, "F002", "Gago", "gago@egmail.com");

    generateTicket(reservations[0]);
    generateTicket(reservations[1]);

    saveTicketToFile(reservations[0]);
    saveTicketToFile(reservations[1]);
}
