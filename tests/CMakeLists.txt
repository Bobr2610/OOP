add_executable(unit_tests unit_tests.cpp)
target_link_libraries(unit_tests gtest_main chek_number_lib)

include(GoogleTest)
gtest_discover_tests(unit_tests)