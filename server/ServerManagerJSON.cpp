//
// Created by yendry
//

#include "ServerManagerJSON.h"


std::string ServerManagerJSON::devolverID(std::string id, std::string accion) {

    rapidjson::Document document;

    document.SetObject( );

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("accion", rapidjson::Value().SetString(accion.c_str(), alloc), alloc);
    document.AddMember("ID", rapidjson::Value().SetString(id.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Parsea el JSON de string a Objeto JSON
 * @param json Char * del string del JSON
 * @return Objeto JSON
 */
rapidjson::Document ServerManagerJSON::parsearJSON(const char* json) {
    rapidjson::Document document;
    document.Parse(json);
    return document;
}

/**
 * Devuelve la respuesta al cliente con la información de si fue o no asignado el valor solicitudado.
 * @param asignar Solución
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverAsignacion(std::string asignar) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("accion", rapidjson::Value().SetString(asignar.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(int dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(char dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(long dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", rapidjson::Value().SetString(std::to_string(dato).c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(double dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(bool dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(float dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", dato, alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}

/**
 * Devuelve el JSON al cliente con el valor solicitado.
 * @param dato dato a enviar
 * @return JSON en forma de std::string
 */
std::string ServerManagerJSON::devolverValor(std::string dato) {
    rapidjson::Document document;

    document.SetObject();

    rapidjson::Document::AllocatorType &alloc = document.GetAllocator();

    document.AddMember("dato", rapidjson::Value().SetString(dato.c_str(), alloc), alloc);

    rapidjson::StringBuffer stringBuffer;
    rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(stringBuffer);
    document.Accept(writer);

    return stringBuffer.GetString();
}
