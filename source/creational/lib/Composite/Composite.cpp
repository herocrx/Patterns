#include <Composite/Composite.hpp>

namespace patterns
{
        Composite::Composite() :
            mName("Composite")
        {

        }

        void Composite::test()
        {

        }

        std::string Composite::getName() const
        {
            return mName;
        }
} // namespace patterns
