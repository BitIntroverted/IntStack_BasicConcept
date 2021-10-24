/*
 * 	Name: Lukas Friedrich
 * 	Coding 03
 * 	Integer stack class with methods to interact with the ADT
 */

#include "stack.h"

Stack::Stack()
    {
        top = TOP;
    }

// function to insert data into stack
bool Stack::push(int x)
    {
        bool tf = false;
        if(top < (ARR_SIZE - 1))
        {
            array[++top] = x;
            tf = true;
        }
        return tf;
    }

// function to remove data from the top of the stack
int Stack::pop()
    {
        if(isEmpty())
        {
            throw 0;
        }
        return array[top--];
    }

// function to check if stack is empty
bool Stack::isEmpty()
    {
        return top < 0;
    }

// function to return data from the top of the stack
int Stack::peek()
    {
        if(isEmpty())
        {
            throw 0;
        }
        return array[top];
    }