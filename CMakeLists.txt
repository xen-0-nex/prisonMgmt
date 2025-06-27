cmake_minimum_required(VERSION 3.10)
project(PrisonMgmt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(PrisonMgmt ${SOURCES})

# Optional: link filesystem if needed (only needed for some older compilers)
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_libraries(PrisonMgmt stdc++fs)
endif()
