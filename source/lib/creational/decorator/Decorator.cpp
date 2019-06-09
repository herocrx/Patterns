/*********************************************************************
* Project           : Patterns
* Filename          : Decorator.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <creational/decorator/Decorator.hpp>


namespace patterns
{
    Decorator::Decorator()
        : mName("Decorator")
    {
    }

    void Decorator::test()
    {

    }

    std::string Decorator::getName()
    {
        return mName;
    }

} // namespace patterns
