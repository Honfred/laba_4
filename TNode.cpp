//
// Created by nabax on 09.12.22.
//

#include "TNode.h"

TNode::TNode(int _info) {
    info = _info;
    next = nullptr;
}

TNode::TNode(const TNode &tmp) {
    info = tmp.info;
    next = nullptr;
}

TNode::~TNode() {
    next = nullptr;
}

TNode &TNode::operator=(TNode tmp) {
    info = tmp.info;
}

int TNode::getInfo() {
    return info;
}

void TNode::setInfo(int k) {
    info = k;
}

TNode *TNode::getNext() {
    return next;
}

TNode *TNode::setNext(TNode *tmp) {
    next = tmp;
}
