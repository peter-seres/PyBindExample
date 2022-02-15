cmake_minimum_required(VERSION 3.4...3.18)
project(PyBindExample)

# Set c++ language version
set(CMAKE_CXX_STANDARD 17)

# Add dependency on pybind11:
add_subdirectory(pybind11)

# Build module:
pybind11_add_module(libfoo src/main.cpp)
