project(func)

add_library(func func.cc)

target_link_libraries(func
    PUBLIC
        util
)

set_target_properties(func PROPERTIES PUBLIC_HEADER func.h)

# specify the include directory for the library
target_include_directories(func PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})