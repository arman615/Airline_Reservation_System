#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight {
private:
    std::string flightNumber;
    std::string flightOrigin;
    std::string flightDestination;
    std::string departureDate;
    int availableSeats;

public:
    Flight(const std::string &flightNumber, const std::string &flightOrigin, const std::string &flightDestination,
           const std::string &departureDate, int availableSeats);

    const std::string &getFlightNumber() const;
    const std::string &getFlightOrigin() const;
    const std::string &getFlightDestination() const;
    const std::string &getDepartureDate() const;
    int getAvailableSeats() const;
    void bookSeat();
};

#endif // FLIGHT_H
