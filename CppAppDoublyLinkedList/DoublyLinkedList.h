/* 
 * File:   DoublyLinkedList.h
 * Author: batista
 *
 * Created on 13 de setembro de 2022, 14:40
 * 
 * A doubly linked list is a linked list where a node stores the memory
 * address about the next node and the previous one. The link to the
 * next node of the last node points to NULL, and the link to the
 * previous node of the first node points to NULL as well.
 **/

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <cstdio>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val, Node *nextNode, Node *prevNode) {
        this->val = val;
        this->next = nextNode;
        this->prev = prevNode;
    }
};

Node *head = NULL;
Node *tail = NULL;

/**
 * Let t be the current tail. When we add an element to the back of
 * the list, the new node becomes the tail with its prev link pointing
 * to t, and the next link of t pointing to the new tail.
 * @param val
 */
void pushBack(int val) {
    Node *newNode = new Node(val, NULL, NULL);
    if (tail == NULL) {
        head = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
    }
    tail = newNode;
}

/**
 * The pushFront function inserts an element at the beginning
 * of the list. The new node becomes the head with its next link
 * pointing to the node that was previously the head.
 * @param val
 */
void pushFront(int val) {
    Node *newNode = new Node(val, NULL, NULL);
    if (head == NULL) {
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
}

/**
 * The popFront function removes the first element of the list.
 * The node associated to the next link of the head becomes the new
 * head, and the previous head is removed from the list.
 */
void popFront() {
    if (head != NULL) {
        Node *nextNode = head->next;
        if (nextNode != NULL) {
            nextNode->prev = NULL;
        }
        delete (head);
        head = nextNode;
        if (head == NULL) {
            tail = NULL;
        }
    }
}

/**
 * Similar to the popFront function, the popBack function removes
 * the last element of the list. The tail is removed and node associated
 * to its prev link becomes the new tail.
 */
void popBack() {
    if (tail != NULL) {
        Node *prevNode = tail->prev;
        if (prevNode != NULL) {
            prevNode->next = NULL;
        }
        delete (tail);
        tail = prevNode;
        if (tail == NULL) {
            head = NULL;
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

#endif /* DOUBLYLINKEDLIST_H */

