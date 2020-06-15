
#include "VSPtr.h"

template<class T>
T VSPtr<T>::operator=(const T &_data) {
    if (Client::esActivo()) {
        client->conectar(clientManager.solicitarAsignacion(server, _data));
        return _data;
    }
    *this->data = _data;
    return *this->data;
}

template<class T>
VSPtr<T> &VSPtr<T>::operator=(const VSPtr<T> &pointer) {
    if (Client::esActivo()) {
        this->server = pointer.server;
    }
    this->pData = pointer.pData;
    return *this;
};

template<class T> void VSPtr<T>::vsptr_init(std::string IP, int puerto) {
    Client::getInstance(IP, puerto);
}