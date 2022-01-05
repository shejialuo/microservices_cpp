#include <iostream>
#include <stdio.h>
#include "Visibility.h"
using namespace std;


int Validate(Instance v)
{
    if(v == "." || v == "*")return 0; //nil
    else if(v == "~")return 1;//exportTo ~ (none) is not allowed for Istio configuration objects
    else return 2;//only .,*,~, or a valid DNS 1123 label is allowed as exportTo entry
}