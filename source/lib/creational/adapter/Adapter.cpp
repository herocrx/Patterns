#include <creational/adapter/Adapter.hpp>

namespace patterns
{
Adapter::Adapter() :
    mName("Adapter")
{}

void Adapter::test()
{

}

std::string Adapter::getName() const
{
    return mName;
}

}
