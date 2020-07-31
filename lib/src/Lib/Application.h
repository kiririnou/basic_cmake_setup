#ifndef APPLICATION_H
#define APPLICATION_H

// #define LIB_BUILD_DLL
#include "Core.h"

namespace Lib
{
    
    class LIB_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();

} // namespace Lib


#endif // APPLICATION_H