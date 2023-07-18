cmake_minimum_required(VERSION 3.22)
project(project_test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT TEST_CODE)
	#add_subdirectory("lib")
	add_subdirectory("src")
	add_executable(${PROJECT_NAME} "main.cc")

	target_link_libraries(${PROJECT_NAME}
    	PUBLIC
        	func
			util
	)
endif()

# Set Test Mode Option
option(TEST_CODE "Build with test code" OFF)

if(TEST_CODE)
    add_subdirectory("test_code")
	add_subdirectory("src")
endif()

