
/* 
 * File:   Queue.h
 * Author: batista
 *
 * Created on 13 de setembro de 2022, 11:42
 */

#ifndef QUEUE_H
#define QUEUE_H

// Queue simulated with array
#include <iostream>
#include <stdio.h>

using namespace std;

int q[100];
int f, b; // index f(front) and b(back) to manage the queue

/***
 * Insert new element on array q[]
 */
void push(int x) {
    q[f++] = x;
}

/**
 * Remove 1 element on array q[]
 * @return 
 */
void pop() {
    //cout << "Value from [b] " << b << " Value from q[]"<< endl;
    int x = q[b++];//init the array possition with NULL
    //cout << "Value from [b] After b++: " << b << endl; 
    //cout << "Removing:..." << x << endl;
    return x;//return, but it is not used by anyone...
}

/**
 * If array equal empty return false
 * @return 
 */
bool isEmpty() {
    if(b == f){
        cout << "Array is empty! " << b << endl;
        return false;
    }
    return true;
}

/**
 * Print all content from array q[]
 */
void print() {
    for (int i = b; i < f; i++) {
        cout << q[i] << endl;
    }
    cout << endl;
}


#endif /* QUEUE_H */

