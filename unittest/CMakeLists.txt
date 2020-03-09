cmake_minimum_required(VERSION 3.5)

# Project settings
set(PROJECT_UNIT_TESTS_NAME ${PROJECT_NAME_STR}_unit_tests)

#set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMakeModules)
#if(CMAKE_COMPILER_IS_GNUCXX)
#    include(CodeCoverage)
#    setup_target_for_coverage(${PROJECT_NAME}_coverage ${PROJECT_UNIT_TEST_NAME} coverage)
#endif()

# Dependencies
find_package(Boost COMPONENTS filesystem system unit_test_framework REQUIRED)

# Gather the header and source files
file(GLOB UNIT_TESTS_INC_FILES ${PROJECT_SOURCE_DIR}/test/*.hpp)
file(GLOB UNIT_TESTS_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)

# Include paths
set(UNIT_TESTS_INCLUDES ${PROJECT_INCLUDE_DIR}
        ${PROJECT_SOURCE_DIR}/dune-daq-template
        ${Boost_INCLUDE_DIR})

# Assign the include directories
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${UNIT_TESTS_INCLUDES})

# Build unit tests
add_definitions(-DBOOST_TEST_DYN_LINK)
add_executable(${PROJECT_UNIT_TESTS_NAME} ${UNIT_TESTS_SRC_FILES} $<TARGET_OBJECTS:dune-daq-template_objects> )
#add_executable(${PROJECT_UNIT_TESTS_NAME} ${UNIT_TESTS_SRC_FILES} ${SRC_FILES})
target_link_libraries(${PROJECT_UNIT_TESTS_NAME} ${Boost_LIBRARIES})
#if(CMAKE_COMPILER_IS_GNUCXX)
#	target_link_libraries(${PROJECT_UNIT_TEST_NAME} ${Boost_LIBRARIES} gcov)
#endif()

enable_testing()
add_test(TemplateTest ${PROJECT_UNIT_TESTS_NAME})
