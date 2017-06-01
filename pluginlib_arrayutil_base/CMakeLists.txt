cmake_minimum_required(VERSION 2.8.3)
project(pluginlib_arrayutil_base)

find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES pluginlib_arrayutil_base
  CATKIN_DEPENDS pluginlib roscpp
  DEPENDS Boost system_lib
)

include_directories(
  include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS}
)

# Declare a C++ library
add_library(pluginlib_arrayutil_base src/arrayutil_base.cpp)
target_link_libraries(pluginlib_arrayutil_base ${catkin_LIBRARIES})

## Mark other files for installation (e.g. launch and bag files, etc.)
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION})

