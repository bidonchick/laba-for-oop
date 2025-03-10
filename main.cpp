
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string licensePlate;
    string model;
public:
    Car() : Car("Unknown", "Unknown") {}
    Car(string lp, string mdl) : licensePlate(lp), model(mdl) {}
    ~Car() {}
    void display() const {
        cout << "Car: " << model << " [" << licensePlate << "]" << endl;
    }
};

class ParkingLot {
private:
    int capacity;
    int occupied;
public:
    ParkingLot() : ParkingLot(50, 0) {}
    ParkingLot(int cap, int occ) : capacity(cap), occupied(occ) {}
    ~ParkingLot() {}
    bool parkCar() {
        if (occupied < capacity) {
            occupied++;
            return true;
        }
        return false;
    }
    void display() const {
        cout << "Parking Lot: " << occupied << "/" << capacity << " occupied." << endl;
    }
};

class Ticket {
private:
    int ticketNumber;
    double price;
public:
    Ticket() : Ticket(0, 10.0) {} 
    Ticket(int num, double p) : ticketNumber(num), price(p) {}
    ~Ticket() {}
    void display() const {
        cout << "Ticket #" << ticketNumber << " | Price: $" << price << endl;
    }
};

int main() {
    Car car1("AB1234CD", "Toyota");
    ParkingLot lot(100, 20);
    Ticket ticket1(101, 10.0);
    
    car1.display();
    lot.display();
    ticket1.display();
    
    return 0;
}
