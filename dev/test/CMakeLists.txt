cmake_minimum_required(VERSION 2.8)
enable_testing()
include_directories(. ../src)
set(LIBS ${LIBS} xsmoke)

file(GLOB XSMOKE_TEST_FILES "test*.cpp")

# create one test executable per cpp file
foreach (XSMOKE_TEST_FILE ${XSMOKE_TEST_FILES})
        get_filename_component(TEST_NAME ${XSMOKE_TEST_FILE} NAME_WE)
        add_executable(${TEST_NAME} ${XSMOKE_TEST_FILE})
        target_link_libraries(${TEST_NAME} xsmoke)
	add_test(${TEST_NAME} ${CMAKE_CURRENT_BINARY_DIR}/${TEST_NAME})
endforeach(XSMOKE_TEST_FILE)

