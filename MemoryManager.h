//
// Created by yendry
//

#ifndef PROYECTO1_MEMORYMANAGER_H
#define PROYECTO1_MEMORYMANAGER_H

#include <iostream>

class MemoryManager {
private:
    std::string ID;
    int offset;
    std::string tipo;
public:
    void asignarValores(std::string ID, int offset, std::string tipo);

public:
    const std::string &getID() const;

    void setID(const std::string &ID);

    int getOffset() const;

    void setOffset(int offset);

    const std::string &getTipo() const;

    void setTipo(const std::string &tipo);

};


#endif //PROYECTO1_MEMORYMANAGER_H
