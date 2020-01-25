include_directories(${lib_SOURCE_DIR}/include)
add_executable(exe main.cpp)
target_link_libraries(exe lib)