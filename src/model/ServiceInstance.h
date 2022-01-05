// ServiceInstance.h
/*SERVICEInstance.h 文件：
    文件名:        SERVICEInstance.h
    内  容:        SERVICEInstance模型构建        
    创建日期:    2021年12月28日
    创建人:       jyx
*/

#pragma once

// 引入mysql头文件(比较好的做法是把文件夹拷到工程目录，也可以在vc目录里面设置)
#include "Provider.h"
#include "Service.h"
#include "visibility/Visibility.h"
#include "protocol/protocol.h"
#include "cluster/cluster.h"
#include<map>
#include<iostream>
using namespace std;


// Locality information for an IstioEndpoint
typedef struct Locality{
	// Label for locality on the endpoint. This is a "/" separated string.
	string Label;

	// ClusterID where the endpoint is located
	string ClusterID;
}


// IstioEndpoint defines a network address (IP:port) associated with an instance of the
// service. A service has one or more instances each running in a
// container/VM/pod.
typedef struct IstioEndpoint
{
    // Instance is a non empty map of arbitrary strings. Each version of a service can
    // be differentiated by a unique set of labels associated with the version. These
    // labels are assigned to all instances of a particular service version. For
    // example, lets say catalog.mystore.com has 2 versions v1 and v2. v1 instances
    // could have labels gitCommit=aeiou234, region=us-east, while v2 instances could
    // have labels name=kittyCat,region=us-east.
    map<string, string> Labels;

    // Address is the address of the endpoint, using envoy proto.
	string Address;

    // ServicePortName tracks the name of the port, this is used to select the IstioEndpoint by service port.
	string ServicePortName;

    // EnvoyEndpoint is a cached LbEndpoint, converted from the data, to
	// avoid recomputation
	// EnvoyEndpoint *endpoint.LbEndpoint


	// ServiceAccount holds the associated service account.
	string ServiceAccount;

	// Network holds the network where this endpoint is present
	// Network network.ID
    string Network;

	// The locality where the endpoint is present.
	Locality Locality;

	// EndpointPort is the port where the workload is listening, can be different
	// from the service port.
	uint EndpointPort;

	// The load balancing weight associated with this endpoint.
	uint LbWeight;

	// TLSMode endpoint is injected with istio sidecar and ready to configure Istio mTLS
	string TLSMode;

	// Namespace that this endpoint belongs to. This is for telemetry purpose.
	string Namespace;

	// Name of the workload that this endpoint belongs to. This is for telemetry purpose.
	string WorkloadName;

	// Specifies the hostname of the Pod, empty for vm workload.
	string HostName;

	// If specified, the fully qualified Pod hostname will be "<hostname>.<subdomain>.<pod namespace>.svc.<cluster domain>".
	string SubDomain;

	// The ingress tunnel supportability of this endpoint.
	// If this endpoint sidecar proxy does not support h2 tunnel, this endpoint will not show up in the EDS clusters
	// which are generated for h2 tunnel.
	int TunnelAbility;

	// Determines the discoverability of this endpoint throughout the mesh.
	// DiscoverabilityPolicy EndpointDiscoverabilityPolicy `json:"-"`
};


// ServiceInstance represents an individual instance of a specific version
// of a service. It binds a network endpoint (ip:port), the service
// description (which is oblivious to various versions) and a set of labels
// that describe the service version associated with this instance.

class ServiceInstance
{
public:

    Service Service;
    Port ServicePort;
    IstioEndpoint Endpoint;

// private:
//     MYSQL m_mysql;                // mysql连接
//     MYSQL_RES* m_res;            // 查询结果集

};