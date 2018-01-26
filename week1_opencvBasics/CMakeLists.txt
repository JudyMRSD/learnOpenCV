cmake_minimum_required(VERSION 3.8)
project(week1_opencvBasics)

set(CMAKE_CXX_STANDARD 11)


find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS})

MACRO(add_example name)
    ADD_EXECUTABLE(${name} ${name}.cpp)
    TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS} )
ENDMACRO()

add_example(readWriteDisplay)
add_example(drawOverImage)
