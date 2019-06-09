/*********************************************************************
* Project           : Patterns
* Filename          : Composite.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#include <string>

namespace patterns
{
    class Composite
    {
    public:
        /**
         * @brief Composite
         */
        Composite();

        /**
         * @brief test
         */
        void test();

        std::string getName() const;
    private:
        std::string mName;
    };
} //namespace patterns
