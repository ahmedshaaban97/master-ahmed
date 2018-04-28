cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( Final )

include_directories( include )

add_executable( analyzeDNA apps/analyzeDNA.cpp )
add_executable( analyzeECG apps/analyzeECG.cpp )
add_executable( awesome_application apps/awesome_application.cpp )
add_executable( calculator apps/calculator.cpp )
add_executable( heron apps/heron.cpp )
add_executable( mainb apps/mainb.cpp )
add_executable( mainm apps/mainm.cpp )
add_executable( test_tree apps/test_tree.cpp )
add_executable( test_dll apps/test_int_dlinkedlist.cpp )
add_executable( test_sll apps/test_int_linkedlist.cpp )
add_executable( test_qarray apps/test_int_q_array.cpp )
add_executable( test_qll apps/test_int_q_linkedlist.cpp )


