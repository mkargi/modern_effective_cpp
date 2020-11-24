cmake_minimum_required (VERSION 2.6)
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS "-std=c++17")
project (2_auto)
file(GLOB SRCSAPP ./*.cpp)
file(GLOB SRCSLIB ./*.h)
add_executable( ${PROJECT_NAME}
 ${SRCSAPP}
 ${SRCSLIB} )
