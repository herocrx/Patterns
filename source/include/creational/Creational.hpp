/*********************************************************************
* Project           : Patterns
* Filename          : Creational.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#pragma once

#include <utils/Pattern.hpp>

#include <creational/adapter/Adapter.hpp>
#include <creational/bridge/Bridge.hpp>
#include <creational/composite/Composite.hpp>
#include <creational/decorator/Decorator.hpp>
#include <creational/facade/Facade.hpp>
#include <creational/flyweight/Flyweight.hpp>
#include <creational/proxy/Proxy.hpp>

namespace patterns
{

class Creational
{

public:

    /**
     * @brief test
     */
    void test();

private:
    utils::Pattern<Adapter>     mAdapter;
    utils::Pattern<Bridge>      mBridge;
    utils::Pattern<Composite>   mComposite;
    utils::Pattern<Decorator>   mDecorator;
    utils::Pattern<Facade>      mFacade;
    utils::Pattern<Proxy>       mProxy;
}; // class Creational

} // namespace patterns
