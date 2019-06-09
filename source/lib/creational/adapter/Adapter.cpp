/*********************************************************************
* Project           : Patterns
* Filename          : Adapter.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <creational/adapter/Adapter.hpp>

namespace patterns
{
Adapter::Adapter() :
    mName("Adapter")
{}

void Adapter::test()
{

}

std::string Adapter::getName() const
{
    return mName;
}

}
