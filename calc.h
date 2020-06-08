//
// Created by steven on 29/5/20.
//

#ifndef PROYECTO1_CALC_H
#define PROYECTO1_CALC_H

#include <cstdlib>
#include "Garbage Collector/GCPtr.h"

template < typename T > class VSPtr
{
private:
    T*    pData; // Generic pointer to be stored
    GCPtr<VSPtr<T>> * garbageCollector; // instantiate GCPtr
    uint64_t ID;

public:
    VSPtr(T* pValue) : pData(pValue)
    {
    }

    static int* New(){  //creacion del puntero
                        //almacena la memoria para un int y un puntero
        int *p;
        p = (int*) malloc(sizeof(int));
    }
    ~VSPtr()
    {
        delete pData;

    }

    T& operator* ()
    {
        return *pData;
    }

    T* operator-> ()
    {
        return pData;
    }

    T& operator& (){
        return *pData;
    }

    void destructorVSPtr(){
        //call Garbage collector to indicate that the reference is destroyed
        garbageCollector->decreaseReferences(this->ID);
        garbageCollector->updateList();
        free(this->pData);

    }
};


int add_values(int a , int b);

#endif //PROYECTO1_CALC_H
