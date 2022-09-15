/* 
 * File:   main.cpp
 * Author: batista
 *
 * Created on 13 de setembro de 2022, 14:29
 */

#include <cstdlib>
#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Add two elements at the end of the list
    pushBack(1);
    pushBack(2);
    pushBack(3);
    pushBack(4);
   // printList();

    // Removes the last element
  //  popBack();
  //  printList();

    // Removes the last element and the list is empty
 //   popBack();
 //   printList();

    // Add five elements at the top of the list
    pushFront(5);
//    pushFront(8);
//    pushFront(3);
//    pushFront(1);
//    pushFront(4);
    printList();

    // Removes the last element and the two first elements popBack();
    popFront();
    popBack();
    printList();

    return 0;
}


