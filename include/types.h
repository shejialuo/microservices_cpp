#ifndef MICROSERVICES_LOADBALANCE_TYPES_H
#define MICROSERVICES_LOADBALANCE_TYPES_H

#include <arpa/inet.h>
#include <string>

// TODO: Now I can't correctly determine the type. Need further actions.
using port_t = int;
using netAddr_t = struct sockaddr;
using serviceAffinity_t = std::string;

#endif // MICROSERVICES_LOADBALANCE_TYPES_H