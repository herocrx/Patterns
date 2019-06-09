/*********************************************************************
* Project           : Patterns
* Filename          : Adapter.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/
#pragma once

#include <string>

namespace patterns
{
    class Adapter
    {
    public:
        /**
         * @brief Adapter
         */
        Adapter();

        /**
         * @brief test
         */
        void test();

        /**
         * @brief getName
         * @return
         */
        std::string getName() const;
    private:
        std::string mName;
    };
} //namespace patterns
