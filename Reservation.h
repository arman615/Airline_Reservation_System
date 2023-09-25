#ifndef RESERVATION_H
#define RESERVATION_H

#include "Flight.h"
#include "User.h"

class Reservation {
private:
    Flight flight;
    User user;

public:
    Reservation(const Flight &flight, const User &user);

    const Flight &getFlight() const;
    const User &getUser() const;
};

#endif // RESERVATION_H
