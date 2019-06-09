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
