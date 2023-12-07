#include <iostream>

// Classe abstraite
class Vehicle {
public:
    virtual void drive() const = 0;


    virtual ~Vehicle() {

    }
};


class Truck : public Vehicle {
public:

    void drive() const override {
        std::cout << "Le camion roule sur la route." << std::endl;
    }


    void loadCargo() const {
        std::cout << "Chargement de la marchandise dans le camion." << std::endl;
    }
};


class Car : public Vehicle {
public:

    void drive() const override {
        std::cout << "La voiture roule dans la rue." << std::endl;
    }


    void honk() const {
        std::cout << "La voiture klaxonne." << std::endl;
    }
};

int main() {

    Truck myTruck;


    myTruck.drive();
    myTruck.loadCargo();


    Car myCar;


    myCar.drive();
    myCar.honk();

    return 0;
}

