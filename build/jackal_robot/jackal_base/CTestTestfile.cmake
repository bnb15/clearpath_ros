# CMake generated Testfile for 
# Source directory: /home/ubuntu/workspace/clearpath_ros/src/jackal_robot/jackal_base
# Build directory: /home/ubuntu/workspace/clearpath_ros/build/jackal_robot/jackal_base
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_jackal_base_roslaunch-check_launch_base.launch "/home/ubuntu/workspace/clearpath_ros/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/ubuntu/workspace/clearpath_ros/build/test_results/jackal_base/roslaunch-check_launch_base.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/ubuntu/workspace/clearpath_ros/build/test_results/jackal_base" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/ubuntu/workspace/clearpath_ros/build/test_results/jackal_base/roslaunch-check_launch_base.launch.xml' '/home/ubuntu/workspace/clearpath_ros/src/jackal_robot/jackal_base/launch/base.launch' ")
add_test(_ctest_jackal_base_roslint_package "/home/ubuntu/workspace/clearpath_ros/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/ubuntu/workspace/clearpath_ros/build/test_results/jackal_base/roslint-jackal_base.xml" "--working-dir" "/home/ubuntu/workspace/clearpath_ros/build/jackal_robot/jackal_base" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/ubuntu/workspace/clearpath_ros/build/test_results/jackal_base/roslint-jackal_base.xml make roslint_jackal_base")
