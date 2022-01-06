#include <string>
#include "roundrobin.h"

std::string
LoadBalancerRR::nextEndpoint(port_t service, netAddr_t source,
                             bool sessionAffinityReset) {
  
}