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
