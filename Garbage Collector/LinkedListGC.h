//
// Created by yendry.
//

#ifndef PROYECTO1_LINKEDLISTGC_H
#define PROYECTO1_LINKEDLISTGC_H

#include <cstdint>
#include <stdint-gcc.h>

template<class T> struct node {
    T *data;
    int id;
    node<T> *next;
    int amountReferences;
};

template<class T> class LinkedListGC {

private:
    node<T> *first;
    int lenght = 0;
public:
    LinkedListGC() { //constructor
        first = nullptr; // declare as nullptr
    }

    /**
     *
     * @param position
     * @return
     */
    node<T> getNode(int position) {
        int i = 0;
        node<T> *aux = first;
        while (i < position) {
            aux = aux->next; //move to next position
            i++;
        }
        return *aux;
    };

    /**
     * Add a new node to the list that contains the memory address and its given id
     * @param address store the memory address
     * @param id as an unsigned int to avoid negative values (in 64bits architecture)
     */
    void addNode(T *address, uint64_t id) {
        auto *newNode = new node<T>();
        newNode->data = address;
        if (this->first == nullptr) {
            newNode->id = id;
            first = newNode;
        } else {
            node<T> *aux;
            aux = this->first;
            while (aux->next) {
                aux = aux->next;
            }
            newNode->id = id;
            aux->next = newNode;
        }
//        newNode->amountReferences++;
        this->lenght++;
    };

    /**
     *
     * @param
     * @return
     */
    T *getNodeData(int position) {
        int i = 0;
        node<T> *aux = first;
        while (i < position) {
            aux = aux->next;
            i++;
        }
        return aux->data;
    };


    /**
     * Get the list lenght
     * @return list lenght
     */
    int getLenght() const {
        return lenght;
    }

    /**
     * Delete a node in a specific position
     * @param position
     */
    void deleteNode(int position) {
        node<T> *aux = first;
        if (position == 0) {
            first = aux->next;
            free(aux);
        } else {
            for (int i = 0; i < position - 1; i++) {
                aux = aux->next;
            }
            free(aux->next);
            aux->next = aux->next->next;
        }
        this->lenght--;
    }

    /**
     * Overload deleteNode method
     * @param id
     */
    void deleteNode(uint64_t id) {
        for (int i = 0; i < this->lenght; i++) {
            if (this->getNodo(i).ID == id) {
                deleteNode(i);
                break;
            }
        }
    }

    /**
     * -Decrease amount of references for the id of the ptr
     * @param id from the node
     */
    void decreaseReferences(uint64_t id) {
        node<T> *aux = first;
        for (int i = 0; i < this->lenght; i++) {
            if (aux->ID == id) {
                aux->amountReferences--;
                break;
            }
            aux = aux->next;
        }
    }

    /**
     * +Increase the amount of references for the id of the ptr
     * @param id from the node
     */
    void increaseReferences(uint64_t id) {
        node<T> *aux = first;
        for (int i = 0; i < this->lenght; i++) {
            if (aux->ID == id) {
                aux->amountReferences++;
                break;
            }
            aux = aux->next;
        }
    }
};

#endif //PROYECTO1_LINKEDLISTGC_H
