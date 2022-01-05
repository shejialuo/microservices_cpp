
#主要配置
include_directories(${PROJECT_SOURCE_DIR}\\include)  #include文件夹位置
link_directories(${PROJECT_SOURCE_DIR}\\lib) #lib文件夹位置
link_libraries(libmysql)  #lib下dll文件名

set(MYSQL_SRC
MySQLManager.cpp
)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_library(mysqltool SHARED ${MYSQL_SRC})