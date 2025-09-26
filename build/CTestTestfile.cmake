# CMake generated Testfile for 
# Source directory: /workspaces/Lab1-1
# Build directory: /workspaces/Lab1-1/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/workspaces/Lab1-1/build/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/Lab1-1/CMakeLists.txt;30;add_test;/workspaces/Lab1-1/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
