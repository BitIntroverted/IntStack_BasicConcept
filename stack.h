/*
 * 	Name: Lukas Friedrich
 * 	Coding 03
 * 	Integer stack class header
 */

#ifndef STACK_STACK_H
#define STACK_STACK_H

#define ARR_SIZE 10
#define TOP -1

class Stack
    {
        public:
        //constructor
        Stack();

        //setters
        bool push(int x);
        int pop();

        //getters
        bool isEmpty();
        int peek();
    
    private: 
        int top;
        int array [ARR_SIZE];

    };

#endif //STACK_STACK_H