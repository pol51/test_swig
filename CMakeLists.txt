cmake_minimum_required(VERSION 2.8)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

set(Python_ADDITIONAL_VERSIONS 2.7)
find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_PATH})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")

set_source_files_properties(test.i PROPERTIES CPLUSPLUS ON)
set_source_files_properties(test.i PROPERTIES SWIG_FLAGS "-includeall")
swig_add_module(test python test.i test.cpp)
swig_link_libraries(test ${PYTHON_LIBRARIES})
