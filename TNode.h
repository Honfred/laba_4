//
// Created by nabax on 09.12.22.
//

#ifndef LABA_4_TNODE_H
#define LABA_4_TNODE_H


class TNode {

    int info;
    TNode* next;

public:
    TNode(int _info = 0);
    TNode(const TNode& tmp);
    ~TNode();

    TNode &operator=(TNode tmp);
    int getInfo();
    void setInfo(int k);
    TNode* getNext();
    TNode* setNext(TNode* tmp);
};


#endif //LABA_4_TNODE_H
