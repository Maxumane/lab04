//
// Created by Max on 2020-10-02.
//

#ifndef LAB04_ANIMAL_HPP
#define LAB04_ANIMAL_HPP
#include <iostream>

using namespace std;

class animal {
protected:
    bool isAlive;
    int age;
    long id;
    double locationX;
    double locationY;
    double locationZ;
public:
    static long animalNo;
    animal();
    animal(int, double, double);
    virtual void move(double, double);
    double getXcoord();
    double getYcoord();
    double getZcoord();
    animal(const animal&);
    virtual ~animal();
    virtual void eat();
    virtual void sleep();
    void setAlive(bool);
    friend std::ostream& operator<<(std::ostream&, const animal&);
    long getId();
};

#endif //LAB04_ANIMAL_HPP
