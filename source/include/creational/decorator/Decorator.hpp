/*********************************************************************
* Project           : Patterns
* Filename          : Decorator.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/
#pragma once

#include <string>

namespace patterns
{
    class Decorator
    {
    public:
        Decorator();
        void test();
        std::string getName();
    private:
        std::string mName;
    };
} //namespace patterns
