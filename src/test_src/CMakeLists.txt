#添加头文件的搜索路径
# include_directories("D:\\Project\\demo\\cpp\\lib\\include\\**")
set(TEST_SRC
add.cpp 
sub.cpp
)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(test_src ${TEST_SRC})

# LINK_LIBRARIES(
# ${PROJECT_SOURCE_DIR}/lib
# )

# ADD_EXECUTABLE(test  ${TEST_SRC})

# TARGET_LINK_LIBRARIES(test
# #utility
# )

# SET_TARGET_PROPERTIES(test  PROPERTIES    #表示生成的执行文件所在路径
# RUNTIME_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/bin")
# # add_library(test ${TEST_SRC})

# set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
# set_target_properties(test PROPERTIES OUTPUT_NAME "test")