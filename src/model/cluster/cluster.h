// cluster.h
/*cluster.h 文件：
    文件名:        cluster.h
    内  容:       AddressMap provides a thread-safe mapping of addresses for each Kubernetes cluster.   
    创建日期:    2021年12月20日
    创建人:       jyx
*/

#pragma once

// AddressMap provides a thread-safe mapping of addresses for each Kubernetes cluster.
typedef char* Instance;
typedef string ID;

type struct AddressMap{
	// Addresses hold the underlying map. Visible only for testing, for the purposes of simplified construction.
	// Production code should never access this directly.
	map<ID ,string> Addresses;

	// NOTE: The copystructure library is not able to copy unexported fields, so the mutex will not be copied.
	// mutex sync.RWMutex
}
