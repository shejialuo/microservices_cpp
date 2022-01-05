
#主要配置
include_directories(${PROJECT_SOURCE_DIR}\\src\\mysqltool)
include_directories(${PROJECT_SOURCE_DIR}\\src\\test_src)
include_directories(${PROJECT_SOURCE_DIR}\\include)  #include文件夹位置
link_directories(${PROJECT_SOURCE_DIR}\\lib) #lib文件夹位置
link_libraries(libmysql)  #lib下dll文件名


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(demo main.cpp)

#为 target 添加需要链接的库，target可以是可执行文件，也可以是库文件
TARGET_LINK_LIBRARIES(demo test_src)
TARGET_LINK_LIBRARIES(demo mysqltool)
TARGET_LINK_LIBRARIES(demo libmysql)

# TARGET_LINK_LIBRARIES(main mysql)
