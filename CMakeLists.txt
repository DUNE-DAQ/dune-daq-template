cmake_minimum_required(VERSION 3.5)

# Definitions
set(PROJECT_NAME_STR dune-daq-template)

# Project title and define versioning
project(${PROJECT_NAME_STR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Include paths
set(TEPLATE_INCLUDES ${TEMPLATE_INCLUDES} ${PROJECT_SOURCE_DIR}/dune-daq-template)

# Gather all sources except the main entry point
file(GLOB INC_FILES dune-daq-template/*.hpp)
file(GLOB SRC_FILES dune-daq-template/*.cpp)

# Build object files for reuse (e.g. in test)
ADD_LIBRARY(dune-daq-template_objects OBJECT ${INC_FILES} ${SRC_FILES})

# Dependencies
find_package(Boost COMPONENTS filesystem system unit_test_framework REQUIRED)

# Unit tests
add_subdirectory(unittest)

# Other tests
add_subdirectory(test)

# Assign the include directories
include_directories(${Boost_INCLUDE_DIRS})

# Build
#set(SOURCE_FILES dune-daq-template/main.cpp $<TARGET_OBJECTS:dune-daq-template_objects>)
set(SOURCE_FILES dune-daq-template/main.cpp ${INC_FILES} ${SRC_FILES})
add_executable(dune-daq-template ${SOURCE_FILES})
target_link_libraries(dune-daq-template ${Boost_LIBRARIES})
