//
// Created by Max on 2020-10-02.
//

#ifndef LAB04_BIRD_HPP
#define LAB04_BIRD_HPP
#include "animal.hpp"
#include <iostream>

class bird : public animal {
public:
    bird();
    bird(int, double, double, double);
    void move(double, double, double);
    bird(const bird&);
    ~bird();
    void eat();
    void sleep();
    friend std::ostream& operator<<(std::ostream&, const bird&);
};

#endif //LAB04_BIRD_HPP
