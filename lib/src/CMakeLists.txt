file(GLOB SRC
    "*.h"
    "**/*.h"
    "**/*.cpp"
)

add_definitions(-DLIB_BUILD_DLL)
add_library(${PROJECT_NAME} SHARED ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# target_compile_definitions(${PROJECT_NAME} PRIVATE -DLIB_BUILD_DLL)