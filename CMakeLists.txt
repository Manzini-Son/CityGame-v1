cmake_minimum_required(VERSION 3.16)
project(CityGameApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Build the original console game without modifying its source.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")
    set(CITYGAME_CLI_SRC main.cpp)
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../../main.cpp")
    set(CITYGAME_CLI_SRC "${CMAKE_CURRENT_SOURCE_DIR}/../../main.cpp")
else()
    message(FATAL_ERROR "Could not find main.cpp for CityGameCLI")
endif()

add_executable(CityGameCLI ${CITYGAME_CLI_SRC})

add_executable(CityGame-v1 src/mainwindow.cpp)
target_link_libraries(CityGame-v1 PRIVATE Qt6::Widgets)
target_compile_definitions(CityGame-v1 PRIVATE
    CITYGAME_CLI_PATH="$<TARGET_FILE:CityGameCLI>"
)
add_dependencies(CityGame-v1 CityGameCLI)

