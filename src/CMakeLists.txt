add_library(chek_number_lib chek_number.cpp)
set_property(TARGET chek_number_lib PROPERTY CXX_STANDARD 17)

add_executable(OOP_LAB_1 main.cpp)
target_link_libraries(OOP_LAB_1 chek_number_lib)
set_property(TARGET OOP_LAB_1 PROPERTY CXX_STANDARD 17)