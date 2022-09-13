
/* 
 * File:   main.cpp
 * Author: batista
   echo "# AlgorForCompetProg" >> README.md
   git init
   git add README.md
   git commit -m "first commit"
   git branch -M main
   git remote add origin git@github.com:batistasilva/AlgorForCompetProg.git
   git push -u origin main
 * Created on 13 de setembro de 2022, 11:41
 */

#include <cstdlib>
#include "Queue.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Insert numbers from 1 to 5
    printf("First queue state after insert [1-5]:\n");
    for (int i = 1; i <= 5; i++) {
        push(i);
    }

    print(); // See the state of the queue

    // Delete the first 2 elements
    pop();
    pop();
    printf("Queue state after 2 deletes:\n");
    print(); // See the state of the queue

    push(4); // Insert one element
    printf("Queue state after 1 insert (number 4):\n");
    print(); // See the state of the stack

    // Clear the stack
    while (!isEmpty()) {
        pop();
    }

    printf("Queue empty\n");
    return 0;
}
