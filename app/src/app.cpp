#include <iostream>

#include <Lib.h>

class App : public Lib::Application
{
public:
    App() {}

    ~App() {}
};

Lib::Application* Lib::CreateApplication()
{
    return new Lib::Application();
}