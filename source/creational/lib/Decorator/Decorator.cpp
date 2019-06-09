#include <Decorator/Decorator.hpp>


namespace patterns
{
    Decorator::Decorator()
        : mName("Decorator")
    {
    }

    void Decorator::test()
    {

    }

    std::string Decorator::getName()
    {
        return mName;
    }

} // namespace patterns
