cmake_minimum_required(VERSION 2.8)
include_directories( . ${GLM_INCLUDE_DIR} ${XEVO_INCLUDE_DIR} ${XSMOKE_INCLUDE_DIR})

#include all source files recursively
SET( XSMOKE_SH_SRC_FILES "./shell/app/xsmoke-sh.cpp" )
message(STATUS "executable files : " ${XSMOKE_SH_SRC_FILES} )
add_executable(xsmoke-sh ${XSMOKE_SH_SRC_FILES})

# link with xsmoke
target_link_libraries( xsmoke-sh xsmoke )

# link with xevo
find_library( XEVO_PATH xevo PATHS ${XEVO_LIB_DIR})
add_library( xevo STATIC IMPORTED )
set_property( TARGET xevo PROPERTY IMPORTED_LOCATION ${XEVO_PATH} )
target_link_libraries( xsmoke-sh xevo )

