/* 
 * File:   main.cpp
 * Author: batista
 *
 * Created on 13 de setembro de 2022, 13:45
 */

#include <cstdlib>
#include "LinkdList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Insert three elements in the list
    pushBack(2);
    pushBack(3);
    pushBack(5);
    printList();

    // Remove the first element
    popFront();
    printList();

    // Remove the other two elements
    popFront();
    popFront();
    printList();

    return 0;
}
