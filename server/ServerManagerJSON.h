//
// Created by yendry
//

#ifndef PROYECTO1_SERVERMANAGERJSON_H
#define PROYECTO1_SERVERMANAGERJSON_H

#include <string>
#include "../include/rapidjson/document.h"
#include "../include/rapidjson/stringbuffer.h"
#include "../include/rapidjson/prettywriter.h"

class ServerManagerJSON {

    std::string devolverID(std::string id, std::string accion);
    std::string devolverAsignacion(std::string asignar);
    std::string devolverValor(int dato);
    std::string devolverValor(char dato);
    std::string devolverValor(long dato);
    std::string devolverValor(double dato);
    std::string devolverValor(bool dato);
    std::string devolverValor(float dato);
    std::string devolverValor(std::string dato);

    rapidjson::Document parsearJSON(const char*);

};


#endif //PROYECTO1_SERVERMANAGERJSON_H
