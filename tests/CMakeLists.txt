add_executable(unit_tests unit_tests.cpp)
target_link_libraries(unit_tests gtest_main chek_number_lib)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../code)

include(GoogleTest)
gtest_discover_tests(unit_tests)