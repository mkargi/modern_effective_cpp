cmake_minimum_required (VERSION 2.6)
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS "-std=c++14")
project (1_type_deduction)
file(GLOB SRCSAPP ./*.cpp)
file(GLOB SRCSLIB ./*.h)
add_executable( ${PROJECT_NAME}
 ${SRCSAPP}
 ${SRCSLIB} )
target_link_libraries(${PROJECT_NAME}
 boost_system
 boost_thread
)
