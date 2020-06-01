//
// Created by steven on 29/5/20.
//

#ifndef PROYECTO1_CALC_H
#define PROYECTO1_CALC_H

#include <cstdlib>

template < typename T > class VSPtr
{
private:
    T*    pData; // Generic pointer to be stored
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



};


int add_values(int a , int b);

#endif //PROYECTO1_CALC_H
