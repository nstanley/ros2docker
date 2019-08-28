# CMake generated Testfile for 
# Source directory: /home/blackjackdev/demos/ros2docker/ia_msgs/src/ia_msgs
# Build directory: /home/blackjackdev/demos/ros2docker/build/ia_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/test_results/ia_msgs/lint_cmake.xunit.xml" "--package-name" "ia_msgs" "--output-file" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/test_results/ia_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/ia_msgs/src/ia_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/test_results/ia_msgs/xmllint.xunit.xml" "--package-name" "ia_msgs" "--output-file" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/blackjackdev/demos/ros2docker/build/ia_msgs/test_results/ia_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/ia_msgs/src/ia_msgs")
subdirs("ia_msgs__py")
