// Service.h
/*SERVICE.h 文件：
    文件名:        SERVICE.h
    内  容:        SERVICE模型构建        
    创建日期:    2021年12月16日
    创建人:       jyx
*/

#pragma once

// 引入mysql头文件(比较好的做法是把文件夹拷到工程目录，也可以在vc目录里面设置)
#include "Provider.h"
#include "visibility/Visibility.h"
#include "protocol/protocol.h"
#include "cluster/cluster.h"
#include<map>
#include<iostream>
using namespace std;

// ServiceAttributes represents a group of custom attributes of the service.
typedef struct ServiceAttributes
{
    // ServiceRegistry indicates the backing service registry system where this service was sourced from.
    string ServiceRegistry;
    // Name is "destination.service.name" attribute
    string Name;
    // Namespace is "destination.service.namespace" attribute
	string Namespace;
	// Labels applied to the service
	map<string, string>Labels;
	// ExportTo defines the visibility of Service in
	// a namespace when the namespace is imported.
	map<string , bool>ExportTo;

	// LabelSelectors are the labels used by the service to select workloads.
	// Applicable to both Kubernetes and ServiceEntries.
	map<string, string>LabelSelectors;

	// For Kubernetes platform

	// ClusterExternalAddresses is a mapping between a cluster name and the external
	// address(es) to access the service from outside the cluster.
	// Used by the aggregator to aggregate the Attributes.ClusterExternalAddresses
	// for clusters where the service resides
	// ClusterExternalAddresses cluster.AddressMap

	// ClusterExternalPorts is a mapping between a cluster name and the service port
	// to node port mappings for a given service. When accessing the service via
	// node port IPs, we need to use the kubernetes assigned node ports of the service
	// The port that the user provides in the meshNetworks config is the service port.
	// We translate that to the appropriate node port here.
	map<string, map<uint32_t, uint32_t>>ClusterExternalPorts;

    // 构造函数，设置一些默认值
};


// Port represents a network port where a service is listening for
// connections. The port should be annotated with the type of protocol
// used by the port.
typedef struct Port
{
    // Name ascribes a human readable name for the port object. When a
	// service has multiple ports, the name field is mandatory
    string Name;

    // Port number where the service can be reached. Does not necessarily
	// map to the corresponding port numbers for the instances behind the
	// service.
    int Port;

    // Protocol to be used for the port.
    string Protocol;

};

// PortList is a set of ports
typedef Port PortList[];

typedef struct HostVIPs {
	// Name of the service, e.g. "catalog.mystore.com"
	// Hostname host.Name;
    string Hostname;

	// ClusterVIPs specifies the service address of the load balancer
	// in each of the clusters where the service resides
	cluster.AddressMap ClusterVIPs ;
}

// Resolution indicates how the service instances need to be resolved before routing traffic.
// type Resolution int

class Service
{
public:

    // Attributes contains additional attributes associated with the service
	// used mostly by RBAC for policy enforcement purposes.
    ServiceAttributes Attributes;

    // Ports is the set of network ports where the service is listening for
	// connections
	PortList Ports;

    // ServiceAccounts specifies the service accounts that run the service.
    string[] ServiceAccounts;

    // CreationTime records the time this service was created, if available.
	// time.Time CreationTime;

    // ClusterLocal specifies the cluster.local host and cluster VIPs for this service. Currently,
	// The cluster.local host is used to address endpoints for the service across the entire mesh.
	// Once Istio fully supports Kubernetes Multi-Cluster Services (MCS), the cluster.local
	// host will be used only to address endpoints residing within the same cluster as the caller.
	// In other words, cluster.local will actually be local to the cluster.
	HostVIPs ClusterLocal ;

	// ClusterSetLocal specifies the Kubernetes Multi-Cluster Services (MCS) clusterset.local
	// host and clusterset VIPs for this service. When MCS is enabled within Istio, this host
	// will be used to address endpoints across the mesh.
	HostVIPs ClusterSetLocal ;

    // Address specifies the service IPv4 address of the load balancer
	// Do not access directly. Use GetClusterLocalAddressForProxy
	 string Address;

     // AutoAllocatedAddress specifies the automatically allocated
	// IPv4 address out of the reserved Class E subnet
	// (240.240.0.0/16) for service entries with non-wildcard
	// hostnames. The IPs assigned to services are not
	// synchronized across istiod replicas as the DNS resolution
	// for these service entries happens completely inside a pod
	// whose proxy is managed by one istiod. That said, the algorithm
	// to allocate IPs is pretty deterministic that at stable state, two
	// istiods will allocate the exact same set of IPs for a given set of
	// service entries.
	string AutoAllocatedAddress;

	// Resolution indicates how the service instances need to be resolved before routing
	// traffic. Most services in the service registry will use static load balancing wherein
	// the proxy will decide the service instance that will receive the traffic. Service entries
	// could either use DNS load balancing (i.e. proxy will query DNS server for the IP of the service)
	// or use the passthrough model (i.e. proxy will forward the traffic to the network endpoint requested
	// by the caller)
	int Resolution;

	// MeshExternal (if true) indicates that the service is external to the mesh.
	// These services are defined using Istio's ServiceEntry spec.
	bool MeshExternal ;

	// ResourceVersion represents the internal version of this object.
	string ResourceVersion ;



//     // 释放连接
//     bool FreeConnect();

//     // 增加数据
//     // bool InsertData(const char* sql);

//     // 删除数据
//     // bool DeleteData(const char* sql);

//     // 更新数据
//     // bool UpdateData(const char* sql);

//     // 执行sql语句, 包括增加、删除、更新数据
//     bool ExecuteSql(const char* sql);

//     // 查询数据
//     MYSQL_RES* QueryData(const char* sql);

//     // 打印结果集
//     void PrintQueryRes();

// private:
//     MYSQL m_mysql;                // mysql连接
//     MYSQL_RES* m_res;            // 查询结果集

};