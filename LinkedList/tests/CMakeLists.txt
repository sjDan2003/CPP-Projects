if(DEFINED ENV{CPPUTEST_HOME})
    message(STATUS "Using CppUTest home: $ENV{CPPUTEST_HOME}")
    set(CPPUTEST_INCLUDE_DIRS $ENV{CPPUTEST_HOME}/include)
    set(CPPUTEST_LIBRARIES $ENV{CPPUTEST_HOME}/lib)
    set(CPPUTEST_LDFLAGS CppUTest CppUTestExt)
else()
    find_package(PkgConfig REQUIRED)
    pkg_search_module(CPPUTEST REQUIRED cpputest>=3.5)
    message(STATUS "Found CppUTest version ${CPPUTEST_VERSION}")
endif()

set(TEST_APP_NAME ${APP_NAME}_tests)
set(TEST_SOURCES
    NodeTests.cpp
    LinkedListTests.cpp
    main.cpp
)

# (3) Take care of include directories
include_directories(${CPPUTEST_INCLUDE_DIRS} ../src/ ../src/LinkedList/)
link_directories(${CPPUTEST_LIBRARIES})

# (4) Build the unit tests objects and link then with the app library
add_executable(${TEST_APP_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_APP_NAME} LinkedListLibrary ${CPPUTEST_LDFLAGS})

# (5) Run the test once the build is done
add_custom_command(TARGET ${TEST_APP_NAME} COMMAND ./${TEST_APP_NAME} POST_BUILD)