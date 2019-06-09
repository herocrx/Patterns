#pragma once

#include <string>

namespace patterns
{
    class Proxy
    {
    public:
        Proxy();
        void test();
        std::string getName() const;
    private:
        std::string mName;
    };
} //namespace patterns
