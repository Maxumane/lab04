#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {

    //Instantiating animal pointers
    animal* pointera;
    animal* pointerb;
    animal* pointerc;

    //initialize different types of animals
    animal aObj = animal(3, 3, 3);
    bird bObj = bird(6, 6, 6, 0.6);
    canine cObj = canine(9, 9, 9);
    //set pointers to references to animals
    pointera = &aObj;
    pointerb = &bObj;
    pointerc = &cObj;

    //print animaldata
    cout << *pointera;
    cout << *pointerb;
    cout << *pointerc;

    //Move,eat,sleep test
    pointerc->move(4.2, 4.2);
    bird* testb = (bird*)(pointerb);
    testb->move(4.3, 4.3, 0.6);
    pointera->sleep();
    pointerb->eat();

    //printing data pre-hunt
    cout << *pointera;
    cout << *pointerb;
    cout << *pointerc;

    //canine hunts
    canine* testc = (canine*)(pointerc);
    testc->hunt(pointera);
    testc->hunt(pointerb);

    //printing data on animals post-hunt
    cout << *pointera;
    cout << *testb;
    cout << *testc;

    return 0;
}
