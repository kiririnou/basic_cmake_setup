#include "lib.h"
#include "spdlog/spdlog.h"
#include <iostream>

void Lib::Print()
{
    std::cout << "yep, lib works" << std::endl;
    spdlog::info("spdlog also works");
}