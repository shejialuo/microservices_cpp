#ifndef MICROSERVICES_LOADBALANCE_LOADBALANCER_H
#define MICROSERVICES_LOADBALANCE_LOADBALANCER_H

#include "types.h"
#include <string>

// Abstract class LoadBalancer.
class LoadBalancer {
private:
  // TODO: Need to add the lock.
public:
  // nextEndpoint returns the endpoint to handle a request
  // for the given port and source Address.
  // TODO: The return type is uncertainly, need more actions.
  virtual std::string nextEndpoint(port_t service, netAddr_t source,
                                   bool sessionAffinityReset) = 0;
  virtual void newService(port_t service, serviceAffinity_t sessionAffinityType,
                          int stickyMaxAgeMinutes) = 0;
  virtual void deleteService(port_t service) = 0;
  virtual void cleanupStaleStickySessions(port_t service) = 0;
};

#endif // MICROSERVICES_LOADBALANCE_LOADBALANCER_H