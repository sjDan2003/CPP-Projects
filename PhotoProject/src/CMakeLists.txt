FIND_PACKAGE( Boost 1.58 COMPONENTS program_options REQUIRED system filesystem)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

#set(LinkedListSourceFiles
#    LinkedList/Node.cpp
#    LinkedList/LinkedList.cpp
#)

#add_library(LinkedListLibrary ${LinkedListSourceFiles})

# add_executable creates a file that the OS can run.
# APP_NAME is a variable defined in the parent CMakeLists file
add_executable(${APP_NAME} main.cpp)
target_link_libraries( ${APP_NAME} ${Boost_LIBRARIES} )

#target_link_libraries(${APP_NAME} LinkedListLibrary)