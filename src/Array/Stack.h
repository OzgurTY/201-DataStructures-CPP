//
// Created by ozgur on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_STACK_H
#define DATASTRUCTURES_CPP_STACK_H


#include "Element.h"

class Stack {
private:
    Element* array;
    int top;
    int N;
public:
    explicit Stack(int N);
    ~Stack();
    bool isFull();
    bool isEmpty();
    Element peek();
    void push(Element element);
    Element pop();
};


#endif //DATASTRUCTURES_CPP_STACK_H
