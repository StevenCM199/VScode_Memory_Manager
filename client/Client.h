//
// Created by yendry
//

#ifndef PROYECTO1_CLIENT_H
#define PROYECTO1_CLIENT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <iostream>
#include "../include/rapidjson/document.h"
#include "../client/ClientManagerJSON.h"

/**
 * Cliente, se conecta con el servidor por medio de un puerto y un id
 */
class Client {
public:
    static Client * getInstance(std::string, int);
    static Client * getInstance();
    static bool esActivo();

    rapidjson::Document conectar(std::string);

    std::string &getIP();

    void setIP(std::string IP);

    int getPORT();

    void setPORT(int PORT);

private:
    ClientManagerJSON clientManager;
    std::string IP;
    int PORT;
    static Client *instance;
    static bool activo;

    Client(std::string, int);

};


#endif //PROYECTO1_CLIENT_H
