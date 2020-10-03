//
// Created by Max on 2020-10-02.
//

#include "canine.hpp"
#include <iostream>

canine::canine() : animal() {
    cout << "New default canine of animal id: " << id << endl;
}

canine::canine(int newAge, double locX, double locY) {
    age = newAge;
    locationX = locX;
    locationY = locY;
    cout << "ThreeParam canine of animal id: " << id << endl;
}

void canine::move(double locX, double locY) {
    locationX = locX;
    locationY = locY;
    cout << "New canine location is X:" << locX << " Y:" << locY << endl;
}

canine::canine(const canine& c) : animal(c) {
    cout << "canine copy constructor called, animal id: " << id << endl;
}

canine::~canine() noexcept {
    cout << "called canine destructor of animal id:" << id  << endl;
}

void canine::eat() {
    cout << "canine of animal id: " << id << " is eating" << endl;
}

void canine::sleep() {
    cout << "canine of animal id: " << id << " is sleeping" << endl;
}

ostream& operator<< (ostream& o, const canine& conAn) {
    o << "animal id: " << conAn.id << " Living: " << conAn.isAlive << "animals age: "
      << conAn.age << " X coordinate: " << conAn.locationX <<
      " Y coordinate: " << conAn.locationY << endl;
    return o;
}