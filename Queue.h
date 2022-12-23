//
// Created by nabax on 09.12.22.
//

#ifndef LABA_4_QUEUE_H
#define LABA_4_QUEUE_H

#include "TNode.h"


class Queue {

    TNode* first;
    TNode* last;

public:
    Queue();
    Queue(const Queue& tmp);
    ~Queue();

    void add (int value);
    int front();
};


#endif //LABA_4_QUEUE_H
