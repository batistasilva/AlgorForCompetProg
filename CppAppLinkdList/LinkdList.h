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

/**
 * The pushBack function add a node at the end of the list. The 
 * new node becomes the tail, and the next pointer of the node that
 * was previously the tail is modified and points to the new node.
 */
void pushBack(int val) {
    Node *newNode = new Node(val, NULL);
    if (tail == NULL) {
        head = newNode;
    } else {
        tail->next = newNode;
    }
    tail = newNode;
}

/**
 * The popFront function removes the first element of the list, if
 * there is any. The node associated to the next pointer of the head
 * becomes the head, and the node that was previously the head is
 * removed.
 */
void popFront() {
    if (head != NULL) {
        Node *nextNode = head->next;
        delete (head);
        head = nextNode;
        if (head == NULL) {
            tail = NULL;
        }
    }
}

/**
 * The function printList as its name says print the whole list
 * by iterating trough all its elements printing them one by one. If
 * the list is empty prints the message ”– empty list –”.
 */
void printList() {
    Node *curNode = head;
    if (curNode == NULL) {
        printf("-- empty list --\n");
        return;
    }
    while (curNode != NULL) {
        printf("%d", curNode->val);
        curNode = curNode->next;
        if (curNode != NULL) {
            printf(" -> ");
        }
    }
    printf("\n");
}


#endif /* LINKDLIST_H */

