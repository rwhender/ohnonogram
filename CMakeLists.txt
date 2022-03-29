cmake_minimum_required(VERSION 3.0.0)
project(ohnonogram VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ohnonogram main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set_property(TARGET ohnonogram PROPERTY C_STANDARD 99)
include(CPack)
