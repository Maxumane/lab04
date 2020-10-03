//
// Created by Max on 2020-10-02.
//

#include "animal.hpp"
#include <iostream>

animal::animal() {
    isAlive = true;
    id = animalNo++;
    age = 0;
    locationX = 0;
    locationY = 0;
    locationZ = 0;
    cout << "New default animal of id: " << id << endl;
}

animal::animal(int newAge, double locX, double locY) {
    isAlive = true;
    id = animalNo++;
    age = newAge;
    locationX = locX;
    locationY = locY;
    locationZ = 0;
    cout << "ThreeParam animal of animal id: " << id << endl;
}

void animal::move(double x, double y) {
    locationX = x;
    locationY = y;
    cout << "New animal location is X:" << x << " Y:" << y << endl;
}

animal::animal(const animal& conAn) {
    isAlive = conAn.isAlive;
    id = conAn.id;
    age = conAn.age;
    locationX = conAn.locationX;
    locationY = conAn.locationY;
    cout << "animal copy constructor called, id: " << id << endl;
}

animal::~animal() {
    cout << "called destructor of animal id: " << id  << endl;
}

void animal::eat() { cout << "animal of animal id: " << id << " is eating" << endl; }

void animal::sleep() {
    cout << "animal of animal id: " << id << " is sleeping" << endl;
}

void animal::setAlive(bool alive) {
    isAlive = alive;
}

ostream& operator<< (ostream& o, const animal& conAn) {
    o << "animal id: " << conAn.id << " Living: " << conAn.isAlive << "animals age: "
    << conAn.age << " X coordinate: " << conAn.locationX <<
    " Y coordinate: " << conAn.locationY << endl;
    return o;
}

//RETURN VARIABLES

long animal::getId() {
    return id;
}

double animal::getXcoord() {
    return locationX;
}

double animal::getYcoord() {
    return locationX;
}

double animal::getZcoord() {
    return locationZ;
}