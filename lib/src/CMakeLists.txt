include_directories(${PROJECT_SOURCE_DIR}/vendor/spdlog/include)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(lib SHARED lib.cpp)
# target_link_libraries(lib spdlog)