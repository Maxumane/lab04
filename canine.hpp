//
// Created by Max on 2020-10-02.
//

#ifndef LAB04_CANINE_HPP
#define LAB04_CANINE_HPP
#include "animal.hpp"
#include <iostream>

class canine : public animal {
public:
    canine();
    canine(int, double, double);
    void move(double, double);
    canine(const canine&);
    ~canine();
    void eat();
    void sleep();
    void hunt(animal *);
    friend std::ostream& operator<<(std::ostream&, const canine&);
};

#endif //LAB04_CANINE_HPP
