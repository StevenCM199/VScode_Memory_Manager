//
// Created by yendry
//

#include <iostream>
#include "vsptr/VSPtr.h"

int main(){

    VSPtr<int> VSPtr1 = VSPtr<int>::New();
    VSPtr<int> VSPtr2 = VSPtr<int>::New();


    VSPtr1 = 5;
    int valor = &VSPtr1;
    std::cout << "Asigna valor a VSPtr1\nVSPtr1: " << valor << std::endl;

    VSPtr2 = VSPtr1;

    int valor2 = &VSPtr2;
    std::cout << "\nAsigna VSPtr1 al VSPtr2\nVSPtr2: " << valor2 << std::endl;

    std::cout << "\nlibera VSPtr1" << std::endl;
    VSPtr1.destructorVSPtr();

    std::cout << "\nVSPtr2 continua con un valor\nVSPtr2: " << valor2 << std::endl;

};