/*********************************************************************
* Project           : Patterns
* Filename          : Flyweight.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <creational/flyweight/Flyweight.hpp>

namespace patterns
{
    Flyweight::Flyweight() :
        mName("Flyweight")
    {}

    void Flyweight::test()
    {

    }

    std::string Flyweight::getName() const
    {
        return mName;
    }

} // namespace patterns
