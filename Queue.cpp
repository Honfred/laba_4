//
// Created by nabax on 09.12.22.
//

#include "Queue.h"

Queue::Queue() {
    first = nullptr;
    last = nullptr;
}

Queue::~Queue() {
    delete first;
    delete last;
}

void Queue::add(int value) {
    TNode* tmp = new TNode(value);
    if (first == nullptr){
        first = last = tmp;
    } else {
        last->setNext(tmp);
        last = tmp;
    }
}

int Queue::front() {
    if (first == nullptr){
        return -1;
    } else {
        int a = first->getInfo();
        TNode* q = first;
        first = first->getNext();
        q->setNext(0);
        delete q;
        if (first == nullptr){
            last = nullptr;
        }
        return a;
    }

}

Queue::Queue(const Queue &tmp) {
    if (tmp.first == nullptr){
        first = nullptr;
        last = nullptr;
    } else {
        first = new TNode(tmp.first->getInfo());
        last = first;
        TNode* current = tmp.first->getNext();
        while (current != nullptr) {
            TNode* p = new TNode(current->getInfo());
            last->setNext(p);
            last = p;
            current = current->getNext();
        }
    }
}
