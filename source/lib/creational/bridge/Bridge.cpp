/*********************************************************************
* Project           : Patterns
* Filename          : Bridge.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <creational/bridge/Bridge.hpp>

namespace patterns
{

Bridge::Bridge() : mName("Bridge")
{
}

void Bridge::test()
{

}

std::string Bridge::getName() const
{
    return mName;
}
}
