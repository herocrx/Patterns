/*********************************************************************
* Project           : Patterns
* Filename          : Flyweight.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#pragma once

#include <string>

namespace patterns
{
    /**
     * @brief The Flyweight class
     */
    class Flyweight
    {
    public:
        /**
         * @brief Flyweight
         */
        Flyweight();

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
        std::string mName; /**< name of the pattern */
    };
} //namespace patterns
