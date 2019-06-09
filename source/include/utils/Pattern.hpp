#include <iostream>

namespace utils
{
template <typename T>
class Pattern
{
public:
    void test()
    {
        std::cout << "Testing creational pattern: " << mPattern.getName() << std::endl;
        mPattern.test();
    }
private:
    T mPattern;
};

}
