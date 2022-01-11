cmake_minimum_required(VERSION 3.19)
project(design_patterns)

set(CMAKE_CXX_STANDARD 23)

include(./build/conan/conanbuildinfo.cmake)
include(./build/conan/conan_paths.cmake)
include(./build/conan/Findfmt.cmake)
include(./build/conan/Findspdlog.cmake)

include_directories(./include)

conan_basic_setup()

add_executable(design_patterns src/main.cpp src/strategy_pattern/Bird.hpp src/strategy_pattern/Attribute.hpp src/strategy_pattern/Duck.hpp src/strategy_pattern/TalkAttribute.hpp)

find_package(fmt)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)