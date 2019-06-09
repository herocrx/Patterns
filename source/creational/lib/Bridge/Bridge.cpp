#include <Bridge/Bridge.hpp>

namespace patterns
{

Bridge::Bridge() : mName("Bridge")
{
}

void Bridge::test()
{

}

std::string Bridge::getName() const
{
    return mName;
}
}
