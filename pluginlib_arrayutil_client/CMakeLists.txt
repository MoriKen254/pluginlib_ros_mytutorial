cmake_minimum_required(VERSION 2.8.3)
project(pluginlib_arrayutil_client)

find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
  std_msgs
  pluginlib_arrayutil_base
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES pluginlib_arrayutil_client
  CATKIN_DEPENDS pluginlib roscpp std_msgs
)

include_directories(
  include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS}
)

# Declare a C++ executable
add_executable(pluginlib_client src/plugin_client.cpp)
target_link_libraries(pluginlib_client ${catkin_LIBRARIES})

#install(TARGETS ${PROJECT_NAME} pluginlib_client
#  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
#
### Mark cpp header files for installation
#install(DIRECTORY include/${PROJECT_NAME}/
#  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#  FILES_MATCHING PATTERN "*.h"
#  PATTERN ".svn" EXCLUDE)
#
### Mark other files for installation (e.g. launch and bag files, etc.)
#install(FILES arrayutil_plugins.xml
#  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
#
install(FILES steer_drive_controller_plugins.xml
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

