//
// Created by yendry on 14/6/20.
//

#include "MemoryManager.h"

/**
 * Retorna el ID de un dato guardado en memoria
 * @return std::string
 */
const std::string &MemoryManager::getID() const {
    return ID;
}

/**
 * Cambia el ID de un dato
 * @param ID
 */
void MemoryManager::setID(const std::string &ID) {
    MemoryManager::ID = ID;
}

/**
 * Obtiene la compensación que se le debe hacer a la memoria para llegar a la posición en la que está el dato.
 * @return int
 */
int MemoryManager::getOffset() const {
    return offset;
}

/**
 * Modifica el offset
 * @param offset
 */
void MemoryManager::setOffset(int offset) {
    MemoryManager::offset = offset;
}

/**
 * Obtiene el tipo de dato
 * @return std::string
 */
const std::string &MemoryManager::getTipo() const {
    return tipo;
}

/**
 * Modifica el tipo de dato, de ser necesario
 * @param tipo
 */
void MemoryManager::setTipo(const std::string &tipo) {
    MemoryManager::tipo = tipo;
}

/**
 * Asigna los valores iniciales para cada dato almacenado
 * @param ID std:string
 * @param offset int
 * @param tipo std::string
 */
void MemoryManager::asignarValores(std::string ID, int offset, std::string tipo) {
    this->ID = ID;
    this->offset = offset;
    this->tipo = tipo;
}