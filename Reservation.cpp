#include "Reservation.h"

Reservation::Reservation(const Flight &flight, const User &user)
    : flight(flight), user(user) {}

const Flight &Reservation::getFlight() const {
    return flight;
}

const User &Reservation::getUser() const {
    return user;
}
