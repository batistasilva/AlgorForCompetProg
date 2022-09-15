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

void printList();

/**
 * Let it be the current tail. When we add an element to the back of
 * the list, the new node becomes the tail with its prev link pointing
 * to it, and the next link of it pointing to the new tail.
 * @param val
 */
void pushBack(int val) {
    Node *newNode = new Node(val, NULL, NULL);
    //
    printList();
    //
    if (tail == NULL) {
        head = newNode; //head has the newNode
    } else {
        newNode->prev = tail; //prev link pointing to tail
        tail->next = newNode; //next has newNode
    }
    //Now tail is updated with the newNode, that was updated with prev and next. 
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
    //
    printList();

    newNode->next = head;
    head->prev = newNode;

    if (head == NULL) {
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
    }
    //
    head = newNode;
}

/**
 * The popFront function removes the first element of the list.
 * The node associated to the next link of the head becomes the new
 * head, and the previous head is removed from the list.
 */
void popFront() {
    if (head != NULL) {
        Node *nextNode = head->next; //Save the next node from head
        //
        if (nextNode != NULL) {
            nextNode->prev = NULL; //Clean previous node from head
        }

        delete (head); //Delete all head  

        head = nextNode; //Set the nextNode saved to head.  
        //That is the way to remove node on the head.
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
        Node *prevNode = tail->prev; //Save previous node from tail
        if (prevNode != NULL) {
            prevNode->next = NULL; //Clean Next node from tail
        }
        //
        delete (tail); //Delete all tail
        //
        tail = prevNode; //Set the prevNode saved to tail. 
        //That is the way to remove node on the tail.
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
    if (curNode == NULL) {//whether is NULL, is because the list is empty
        cout << "[      Empty List      ]" << endl;
        return; //return to the caller
    }

    while (curNode != NULL) { //Run the loop while there is a node with content...
        cout << "Actual curNode->val..: " << curNode->val << endl;
        //
        curNode = curNode->next; //Pointing to next node
    }
    cout << endl;
}

#endif /* DOUBLYLINKEDLIST_H */

