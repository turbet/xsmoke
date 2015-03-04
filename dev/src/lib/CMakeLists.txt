cmake_minimum_required(VERSION 2.8)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} ${XEVO_INCLUDE_DIR} ${GLM_INCLUDE_DIR}/..)
message ( STATUS "****************************************" ${XEVO_INCLUDE_DIR} )
# display include directories
get_property(INCLUDE_DIRECTORIES DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
message(STATUS "XSmoke lib include dir='${INCLUDE_DIRECTORIES}'")


#include all source files recursively
file(GLOB_RECURSE XSMOKE_SRC_FILES "*.cpp")
add_library(xsmoke STATIC ${XSMOKE_SRC_FILES})

