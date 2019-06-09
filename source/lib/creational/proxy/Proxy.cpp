#include <creational/proxy/Proxy.hpp>


namespace patterns
{
    Proxy::Proxy() :
        mName("Proxy")
    {}

    void Proxy::test()
    {

    }

    std::string Proxy::getName() const
    {
        return mName;
    }
} // namespace patterns
