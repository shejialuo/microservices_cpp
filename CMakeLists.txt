cmake_minimum_required(VERSION 3.0.0)
project(MICROSERVICE-CPP VERSION 0.1.0)

include(CTest)
enable_testing()


#主要配置
include_directories(${PROJECT_SOURCE_DIR}\\include)  #include文件夹位置
link_directories(${PROJECT_SOURCE_DIR}\\lib) #lib文件夹位置
link_libraries(libmysql)  #lib下dll文件名

 #与本次配置无关，一般由项目自动生成（注意要在引入文件夹的下面）
# add_executable(demo main.cpp) 
add_subdirectory(src)



# set(MYSQL_SRC
# MySQLManager.cpp
# )

# # SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# # add_library(mysqltool ${MYSQL_SRC})

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# link_directories(.) # 从当前目录中寻找链接文件
# add_executable(demo main.cpp MySQLManager.cpp MySQLManager.h)
# #主要配置第一个参数为项目名
# #为 target 添加需要链接的库，target可以是可执行文件，也可以是库文件
# # TARGET_LINK_LIBRARIES(demo test_src)
# # TARGET_LINK_LIBRARIES(demo mysqltool)

# TARGET_LINK_LIBRARIES(demo libmysql.dll)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)



