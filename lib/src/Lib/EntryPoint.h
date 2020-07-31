#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#if defined(__GNUC__) || defined(_MSC_VER)

extern Lib::Application* Lib::CreateApplication();

int main(int argc, char** argv)
{
    printf("Lib Application start\n");

    auto app = Lib::CreateApplication();
    app->Run();
    delete app;

    printf("Lib Application stopped\n");
    return 0;
}

#endif
#endif // ENTRYPOINT_H