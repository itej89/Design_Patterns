cmake_minimum_required (VERSION 3.22.1)

project (AbstractFactoryPattern VERSION 1.0)

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
        src/ApplicationFactory.cpp
        src/GUIFactory.cpp
        src/MacButton.cpp
        src/MacCheckbox.cpp
        src/MacGuiFactory.cpp
        src/WinButton.cpp
        src/WinCheckbox.cpp
        src/WinGuiFactory.cpp
    )