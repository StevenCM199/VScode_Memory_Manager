//
// Created by yendry
//

#ifndef PROYECTO1_CLIENTMANAGERJSON_H
#define PROYECTO1_CLIENTMANAGERJSON_H

#include "../include/rapidjson/document.h"

class ClientManagerJSON {
public:
    std::string solicitarMemoria(std::string);

    std::string solicitarValor(std::string);


    std::string solicitarAsignacion(std::string id, int dato);

    std::string solicitarAsignacion(std::string id, char dato);
    std::string solicitarAsignacion(std::string id, std::string dato);

    std::string solicitarAsignacion(std::string id, double dato);

    std::string solicitarAsignacion(std::string id, bool dato);

    std::string solicitarAsignacion(std::string id, long dato);

    std::string solicitarAsignacion(std::string id, float dato);

    rapidjson::Document parsearJSON(char *);

};


#endif //PROYECTO1_CLIENTMANAGERJSON_H
