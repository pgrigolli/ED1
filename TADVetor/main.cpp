#include "vetor.h"
#include <string>
#include <iostream>
using namespace std;


int main(){


    Vetor *v = new Vetor();

    v->push_front(6); // [6,5,4,3,2,1,0]
    v->push_front(5);
    v->push_front(4);
    v->push_front(3);
    v->push_front(2);
    v->push_front(1);
    v->push_front(0);
    v->print();

    // cout << v->at(3) << endl; // 3
    // cout << v->back(); // 6
    // cout << v->empty(); // 0/false
    // v->erase(4); // 4
    // v->print(); // [0,1,2,3,5,6]

    // cout << v->front() << endl; // 0
    // v->insert(4, 4);
    // v->print(); //[0,1,2,3,4,5,6]

    // v->pop_back(); //[0,1,2,3,4,5]
    // v->print(); //[0,1,2,3,4,5]

    // v->pop_front(); //[1,2,3,4,5]
    // v->print(); //[1,2,3,4,5]

    // v->push_back(6); // [1,2,3,4,5,6]
    // v->print();

    // v->push_front(0); // [0,1,2,3,4,5,6]
    // v->print();

    // v->replace(3, 12);
    // v->print(); // [0,1,2,12,4,5,6]



}