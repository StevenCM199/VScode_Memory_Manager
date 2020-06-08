//
// Created by yendry
//

#ifndef PROYECTO1_GCPTR_H
#define PROYECTO1_GCPTR_H

#include <iostream>
#include "LinkedListGC.h"

template <class T> class GCPtr {
private:
    static GCPtr<T> *instance;
    LinkedListGC<T> list;

    GCPtr();
public:
    static GCPtr *getInstance();
    int addGCPtr(T *data);
    void updateList();
    void decreaseReferences(uint64_t id);
};


#endif //PROYECTO1_GCPTR_H
