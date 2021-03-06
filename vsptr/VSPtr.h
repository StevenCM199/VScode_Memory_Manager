//
// Created by steven on 29/5/20.
//

#ifndef PROYECTO1_VSPTR_H
#define PROYECTO1_VSPTR_H

#include <cstdlib>
#include "../Garbage Collector/GCPtr.h"
#include "../client/Client.h"

template < typename T > class VSPtr
{
private:
    T*    pData; // Generic pointer to be stored
    GCPtr<VSPtr<T>> * garbageCollector; // instantiate GCPtr
    Client * client;
    ClientManagerJSON clientManager;
    uint64_t ID;
    std::string server;


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

    static void vsptr_init(std::string IP, int puerto);

    T operator=(const T &data);

    VSPtr<T> &operator=(const VSPtr<T> &pointer);


};

#endif //PROYECTO1_VSPTR_H
