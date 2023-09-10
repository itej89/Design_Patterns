cmake_minimum_required (VERSION 3.22.1)

project (TemplatePattern VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

configure_file(VersionConfig.h.in VersionConfig.h)

add_executable(main "")

target_include_directories(main 
    PRIVATE 
        "${PROJECT_BINARY_DIR}"
        include
    )

target_sources(main
    PRIVATE
        src/main.cpp
        src/ConcreteClass1..cpp
        src/ConcreteClass2.cpp
        src/Abstract.cpp
    )