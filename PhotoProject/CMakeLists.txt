cmake_minimum_required (VERSION 3.4)

project (PhotoProject)

set (CMAKE_CXX_STANDARD 11)
add_compile_options(-Wall -Werror)

set(APP_NAME PhotoProjectApp)

add_subdirectory(src)
#add_subdirectory(tests)