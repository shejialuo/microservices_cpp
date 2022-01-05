// Visibility.h
/*Visibility.h 文件：
    文件名:        Visibility.h
    内  容:        ID defines underlying platform supporting service registry        
    创建日期:    2021年12月17日
    创建人:       jyx
*/

#pragma once

// ID defines underlying platform supporting service registry
typedef char* Instance;

// Private implies namespace local config
const Instance Private = ".";
// Public implies config is visible to all
const Instance Public= "*";
// None implies service is visible to no one. Used for services only
const Instance None = "~";

// Validate a visibility value ( ./*/~/some namespace name which is DNS1123 label)
int Validate(Instance& v);
// class Visibility
// {
// public:

//     // Private implies namespace local config
// 	Instance Private = ".";
// 	// Public implies config is visible to all
// 	Instance Public= "*";
// 	// None implies service is visible to no one. Used for services only
// 	Instance None = "~";

//     // Validate a visibility value ( ./*/~/some namespace name which is DNS1123 label)
//     int Validate(Instance& v);

// };
