
#include <catch2/catch.hpp>

#include <Creational.hpp>
//#include <Operation.hpp>
//#include <Structural.hpp>

class App
{
public:
    void run();

private:
    patterns::Creational mCreationalPatterns;


};

void App::run()
{
    mCreationalPatterns.test();
}


int main()
{
    App app;
    app.run();
	return 0;
}
