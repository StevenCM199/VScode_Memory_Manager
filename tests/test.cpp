//
// Created by steven on 29/5/20.
//
#include <stdio.h>
#include "../calc.h"
#include <iostream>


int add_values(int i, int i1);

int main(int argc, char* argv[]){

    VSPtr<int> myPtr = VSPtr<int>::New();

    *myPtr = 5;

    int valor = &myPtr;
    std::cout << valor ;



    /*int p = 5;
    std::cout << &p;*/

    return 0;
}

