add_executable(unit_tests unit_tests.cpp)
target_link_libraries(unit_tests gtest_main number_phobia_lib)

include(GoogleTest)
gtest_discover_tests(unit_tests)