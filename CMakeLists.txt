# CMakeTutorial

# This minimum version is mostly set in order to get a newer version
# of the FindMPI check.  Note that you can easily install a newer cmake version
# using conda or pip.
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

foreach(policy
    CMP0048
    CMP0074
    CMP0077
  )
  if(POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif()
endforeach()

project(CMakeTutorial VERSION 1.0.0 LANGUAGES C CXX)

# Force C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# External packages
find_package(Boost COMPONENTS system filesystem program_options REQUIRED)
find_package(GSL REQUIRED)
find_package(ZLIB REQUIRED)

# Internal products

add_subdirectory(pybind11)
add_subdirectory(src)
