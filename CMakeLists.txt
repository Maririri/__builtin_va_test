cmake_minimum_required(VERSION 3.8)
project(VA__builtin)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp clang-tidy-cyrillic.cpp va_start.cpp va_arg.cpp va_copy.cpp va_end.cpp va_list.cpp)
add_executable(VA__builtin ${SOURCE_FILES})