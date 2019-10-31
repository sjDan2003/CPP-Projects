set(LinkedListSourceFiles
    LinkedList/Node.cpp
    LinkedList/LinkedList.cpp
)

add_library(LinkedListLibrary ${LinkedListSourceFiles})

# add_executable creates a file that the OS can run.
# APP_NAME is a variable defined in the parent CMakeLists file
add_executable(${APP_NAME} main.cpp)

target_link_libraries(${APP_NAME} LinkedListLibrary)