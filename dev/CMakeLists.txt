cmake_minimum_required(VERSION 2.8)
project(XSmoke)
enable_testing()

# BASEPATH
SET(BASEPATH "${CMAKE_SOURCE_DIR}")
message( STATUS "XSmoke root directory = " ${BASEPATH} )


#SUBDIRLIST macro definition
MACRO(SUBDIRLIST return_list cur_dir)
    FILE(GLOB_RECURSE new_list cur_dir "*.hpp")
    SET(dir_list "")
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    LIST(REMOVE_DUPLICATES dir_list)
    SET(${return_list} ${dir_list})
ENDMACRO()

############ GLM library ##########
set (GLM_INCLUDE_DIR ${BASEPATH}/libs/glm)
message( STATUS "glm include dir = " ${GLM_INCLUDE_DIR} )
############

############ XEvo library #########
#find_package( xevo )
#set (XEVO_LIB_DIR ${BASEPATH}/libs/xevo/include)
set (XEVO_INCLUDE_DIR ${BASEPATH}/../../xevo/dev/dist/include)
#message( STATUS "xevo include dir = " ${XEVO_INCLUDE_DIR} )
set (XEVO_LIB_DIR ${BASEPATH}/../../xevo/dev/dist/lib/)
#message( STATUS "xevo lib dir = " ${XEVO_LIB_DIR} )
############

############ XSmoke library #########
#set (XEVO_INCLUDE_DIR ${BASEPATH}/libs/xevo/include)
set (XSMOKE_INCLUDE_DIR ${BASEPATH}/src/lib)
message( STATUS "xsmoke include dir = " ${XSMOKE_INCLUDE_DIR} )
############

#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/CMakeModules/)
add_subdirectory(src)
add_subdirectory(test)
