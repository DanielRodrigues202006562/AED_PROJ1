#ifndef AED_PROJ1_PLANE_H
#define AED_PROJ1_PLANE_H
#include <string>
#include <list>
#include "Flight.h"
#include "Suitcase.h"
using namespace std;


class Plane{
    unsigned numSeatsFirst;
    unsigned numSeatsExecutive;
    unsigned numSeatsEconomic;
    string plate;
    string model;
    list<CheckedSuitcase> cargoHold;
    list<Passenger> passengers;
    list<Flight*> flightPlan;
    bool broken;
    bool dirty;
public:
    Plane(unsigned numSeatsFirst, unsigned numSeatsExecutive, unsigned numSeatsEconomic, string plate, string model);
    Plane();
    unsigned getNumSeats() const;
    unsigned getNumSeatsFirst() const;
    unsigned getNumSeatsExecutive() const;
    unsigned getNumSeatsEconomic() const;
    void changeNumSeatsFirst(unsigned num);
    void changeNumSeatsExecutive(unsigned num);
    void changeNumSeatsEconomic(unsigned num);
    void changePlate(string plate);
    void addGroupSuitcaseCargo(list<CheckedSuitcase> c1);
    void addSuitcaseCargo(CheckedSuitcase c1);
    void addFlight(Flight* f1);
    bool removeFlight(unsigned id);
    list<CheckedSuitcase> unloadSuitcases();
    void addPassenger(Passenger p1);
    void addPassenger(list<Passenger> p1);
    void removePassenger(Passenger p1);
    list<Passenger> unloadPassenger();
};

#endif //AED_PROJ1_PLANE_H