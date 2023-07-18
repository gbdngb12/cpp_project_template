project(test)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} "test_code.cc")

target_link_libraries(${PROJECT_NAME} 
    PRIVATE
    	GTest::gtest_main
        func
)
