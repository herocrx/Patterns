/*********************************************************************
* Project           : Patterns
* Filename          : Composite.cpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <creational/composite/Composite.hpp>

namespace patterns
{
        Composite::Composite() :
            mName("Composite")
        {

        }

        void Composite::test()
        {

        }

        std::string Composite::getName() const
        {
            return mName;
        }
} // namespace patterns
