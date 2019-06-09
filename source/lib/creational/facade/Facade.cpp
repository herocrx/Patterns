/*********************************************************************
* Project           : Patterns
* Filename          : Facade.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/
#include <creational/facade/Facade.hpp>

namespace patterns
{
    Facade::Facade() :
        mName("Facade")
    {}

    void Facade::test()
    {

    }

    std::string Facade::getName() const
    {
        return mName;
    }

} // namespace patterns
