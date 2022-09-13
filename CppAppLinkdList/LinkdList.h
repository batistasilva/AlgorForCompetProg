/* 
 * File:   LinkdList.h
 * Author: batista
 *
 * Created on 13 de setembro de 2022, 13:46
 */

#ifndef LINKDLIST_H
#define LINKDLIST_H
#include <cstdio>

using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val, Node *nextNode) {
        this->val = val;
        this->next = nextNode;
    }
};

Node *head = NULL;
Node *tail = NULL;

void pushBack(int);
void popFront();
void printList();


#endif /* LINKDLIST_H */

