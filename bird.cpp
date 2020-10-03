//
// Created by Max on 2020-10-02.
//

#include "bird.hpp"
#include <iostream>

bird::bird() : animal() {
    cout << "New default bird of animal id: " << id << endl;
}

bird::bird(int newAge, double locX, double locY, double locZ) : animal(newAge, locX, locY) {
    locationZ = locZ;
    cout << "ThreeParam bird of animal id: " << id << endl;
}

void bird::move(double locX, double locY, double locZ) {
    locationX = locX;
    locationY = locY;
    locationZ = locZ;
    cout << "New bird location is X:" << locX << " Y:" << locY << " Z:" << locZ << endl;
}

bird::bird(const bird& c) : animal(c) {
    cout << "bird copy constructor called, animal id: " << id << endl;
}

bird::~bird() noexcept {
    cout << "called bird destructor of animal id:" << id  << endl;
}

void bird::eat() {
    cout << "bird of animal id: " << id << " is eating" << endl;
}

void bird::sleep() {
    cout << "bird of animal id: " << id << " is sleeping" << endl;
}

ostream& operator<< (ostream& o, const bird& conAn) {
    o << "animal id: " << conAn.id << " Living: " << conAn.isAlive << "animals age: "
      << conAn.age << " X coordinate: " << conAn.locationX <<
      " Y coordinate: " << conAn.locationY << endl;
    return o;
}