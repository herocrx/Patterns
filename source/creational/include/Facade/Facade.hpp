#pragma once

#include <string>


namespace patterns
{
    /**
     * @brief The Facade class
     */
    class Facade
    {
    public:
        /**
         * @brief Facade
         */
        Facade();

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
