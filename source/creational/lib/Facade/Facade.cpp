#include <Facade/Facade.hpp>

namespace patterns
{
    Facade::Facade() :
        mName("Facade")
    {}

    void Facade::test()
    {

    }

    std::string Facade::getName() const
    {
        return mName;
    }

} // namespace patterns
