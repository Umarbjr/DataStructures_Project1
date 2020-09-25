#pragma once
#ifndef LINKEDLIST
#define LINKEDLIST
#include "NodeClass.h"

template<class T>
class linkedList
{
public:
    node<T>* head;
    long double size = 0;
    long double foundCompare = 0;
    long double notFoundCompare =0;
    int compares = 0;

    void insert(T item) {
        node<T>* temp = new node<T>(item);
        temp->next = head;
        head = temp;
        size++;
    }

    void remove(T item) {
        if (head->data != nullptr) {
            node<T>* temp = new node<T>(head->data);
            head->data = temp->next;
            temp = nullptr;
            size--;
        }
    }

    bool find(T item) {
        for (node<T>* temp = head; temp != nullptr; temp = temp->next) {
	        compares++;
            if (((temp->data).compare(item)) == 0) {
                foundCompare = compares;
                compares = 0;
                return true;
            }
            else if (temp->next == nullptr) {
                notFoundComp = compares;
                compares = 0;
                return false;
            }
        }
	return false;
    }

    int getSize() {
        return size;
    }

    void print() {
        for (node<T>* temp = head; temp != nullptr; temp = temp->next) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << "->";
            }
            else {
                cout << "\n";
            }
        }
    }

};
#endif
