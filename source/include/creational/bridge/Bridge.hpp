
#include <string>

namespace patterns
{
    class Bridge
    {
    public:
        /**
         * @brief Bridge
         */
        Bridge();

        /**
         * @brief test
         */
        void test();

        /**
         * @brief name
         * @return
         */
        std::string getName() const;

    private:

        std::string mName;
    };
} //namespace patterns
