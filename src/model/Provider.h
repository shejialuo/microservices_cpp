// Provider.h
/*Provider.h 文件：
    文件名:        Provider.h
    内  容:        ID defines underlying platform supporting service registry        
    创建日期:    2021年12月17日
    创建人:       jyx
*/

#pragma once

// 引入mysql头文件(比较好的做法是把文件夹拷到工程目录，也可以在vc目录里面设置)

#include<iostream>
using namespace std;

// ID defines underlying platform supporting service registry
typedef char* ID;

class Provider
{
public:

    ID Mock = "Mock";   // Mock is a service registry that contains 2 hard-coded test services
    ID Kubernetes = "Kubernetes";    // Kubernetes is a service registry backed by k8s API server
    ID External = "External";   // External is a service registry for externally provided ServiceEntries

};

