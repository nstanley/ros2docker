# CMake generated Testfile for 
# Source directory: /home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one
# Build directory: /home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/copyright.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/cppcheck.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/cppcheck.xunit.xml" "--include_dirs" "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/cpplint.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/lint_cmake.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/uncrustify.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/xmllint.xunit.xml" "--package-name" "pkg_one" "--output-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/blackjackdev/demos/ros2docker/pkg_one/build/pkg_one/test_results/pkg_one/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/blackjackdev/demos/ros2docker/pkg_one/src/pkg_one")