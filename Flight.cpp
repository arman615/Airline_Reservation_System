#include "Flight.h"

Flight::Flight(const std::string &flightNumber, const std::string &flightOrigin, const std::string &flightDestination,
               const std::string &departureDate, int availableSeats)
    : flightNumber(flightNumber),
      flightOrigin(flightOrigin),
      flightDestination(flightDestination),
      departureDate(departureDate),
      availableSeats(availableSeats) {}

const std::string &Flight::getFlightNumber() const {
    return flightNumber;
}

const std::string &Flight::getFlightOrigin() const {
    return flightOrigin;
}

const std::string &Flight::getFlightDestination() const {
    return flightDestination;
}

const std::string &Flight::getDepartureDate() const {
    return departureDate;
}

int Flight::getAvailableSeats() const {
    return availableSeats;
}

void Flight::bookSeat() {
    availableSeats--;
}
