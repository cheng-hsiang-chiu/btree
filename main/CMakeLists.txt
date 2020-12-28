
## --------------------------------------------------------
## main program 1: btree
## --------------------------------------------------------
add_executable(btree main.cpp)
target_link_libraries(btree error_settings)
target_include_directories(btree PRIVATE ${BTREE_SRC_DIR})
