# CMake generated Testfile for 
# Source directory: /home/user/catkin_ws/src/robot_navigation/dwb_plugins
# Build directory: /home/user/catkin_ws/build/robot_navigation/dwb_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_dwb_plugins_gtest_vtest "/home/user/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/user/catkin_ws/build/test_results/dwb_plugins/gtest-vtest.xml" "--return-code" "/home/user/catkin_ws/devel/lib/dwb_plugins/vtest --gtest_output=xml:/home/user/catkin_ws/build/test_results/dwb_plugins/gtest-vtest.xml")
set_tests_properties(_ctest_dwb_plugins_gtest_vtest PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;37;catkin_add_gtest;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;0;")
add_test(_ctest_dwb_plugins_rostest_test_goal_checker.launch "/home/user/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/user/catkin_ws/build/test_results/dwb_plugins/rostest-test_goal_checker.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/user/catkin_ws/src/robot_navigation/dwb_plugins --package=dwb_plugins --results-filename test_goal_checker.xml --results-base-dir \"/home/user/catkin_ws/build/test_results\" /home/user/catkin_ws/src/robot_navigation/dwb_plugins/test/goal_checker.launch ")
set_tests_properties(_ctest_dwb_plugins_rostest_test_goal_checker.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;40;add_rostest_gtest;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;0;")
add_test(_ctest_dwb_plugins_rostest_test_twist_gen.launch "/home/user/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/user/catkin_ws/build/test_results/dwb_plugins/rostest-test_twist_gen.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/user/catkin_ws/src/robot_navigation/dwb_plugins --package=dwb_plugins --results-filename test_twist_gen.xml --results-base-dir \"/home/user/catkin_ws/build/test_results\" /home/user/catkin_ws/src/robot_navigation/dwb_plugins/test/twist_gen.launch ")
set_tests_properties(_ctest_dwb_plugins_rostest_test_twist_gen.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;43;add_rostest_gtest;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;0;")
add_test(_ctest_dwb_plugins_roslint_package "/home/user/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/user/catkin_ws/build/test_results/dwb_plugins/roslint-dwb_plugins.xml" "--working-dir" "/home/user/catkin_ws/build/robot_navigation/dwb_plugins" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/user/catkin_ws/build/test_results/dwb_plugins/roslint-dwb_plugins.xml make roslint_dwb_plugins")
set_tests_properties(_ctest_dwb_plugins_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;48;roslint_add_test;/home/user/catkin_ws/src/robot_navigation/dwb_plugins/CMakeLists.txt;0;")
