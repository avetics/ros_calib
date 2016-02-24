cmake_minimum_required(VERSION 2.4.6)
project(test1)


find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs)
generate_messages(DEPENDENCIES std_msgs)
catkin_package()

include_directories(include $(catkin_INCLUDE_DIRS))

add_executable(talker src/taker.cpp)
target_link_libraries(talker $(catkin_LIBRARIES))
add_dependencies(talker test1_generate_messages_cpp)

add_executable(listener src/listerner.cpp)
target_link_libraries(listener $(catkin_LIBRARIES))
add_dependencies(listener test1_generate_messages_cpp)

