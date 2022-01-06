#ifndef MICROSERVICES_LOADBALANCE_ROUNDROBIN_H
#define MICROSERVICES_LOADBALANCE_ROUNDROBIN_H

#include <string>
#include "loadbalancer.h"

class LoadBalancerRR : public LoadBalancer {
public:
  std::string nextEndpoint(port_t service, netAddr_t source,
                                   bool sessionAffinityReset) override;
  void newService(port_t service, serviceAffinity_t sessionAffinityType,
                          int stickyMaxAgeMinutes) override;
  void deleteService(port_t service) override;
  void cleanupStaleStickySessions(port_t service) override;
};

typedef struct affinityState {
  std::string clientIP;
  std::string endpoint;
  // TODO: add the time
}affinityState_t;


#endif // MICROSERVICES_LOADBALANCE_ROUNDROBIN_H