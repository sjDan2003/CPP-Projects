# The CMAKE minimum version is used to specify what minimum version
# the user should install on their system
# If the user has a version before the minimum version, they won't
# be able to take advantage of features in later versions
cmake_minimum_required (VERSION 3.4)

# The project name. This does not necessary correspond to the executable name
project (LinkedList)

# You can set the C++ standard version too. Becuase ++ means incrementing
# The plus signs are turned on their side to become X's
set (CMAKE_CXX_STANDARD 11)

# CMAKE can create variables that can be used either in this CMakeList or in
# other CMakeList files in subdirectories
set(APP_NAME LinkedListApp)

# The add_subdirectory function tells CMAKE that there's another folder that
# it should look at for other CMakeList files.
add_subdirectory(src)
add_subdirectory(tests)

#
# CMAKE can display output to the console using the message function
# This can simply be text or can output variables.
# There are also CMAKE variables that the user can access
# message(${PROJECT_SOURCE_DIR})