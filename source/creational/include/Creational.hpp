/*********************************************************************
* Project           : Patterns
* Filename          : Creational.hpp
* Author            : HKuc
* Date created      : 09.07.2019
*********************************************************************/

#pragma once

#include <include/Pattern.hpp>

#include <Adapter/Adapter.hpp>
#include <Bridge/Bridge.hpp>
#include <Composite/Composite.hpp>
#include <Decorator/Decorator.hpp>
#include <Facade/Facade.hpp>
#include <Flyweight/Flyweight.hpp>
#include <Proxy/Proxy.hpp>

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
