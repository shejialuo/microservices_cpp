
#主要配置
include_directories(${PROJECT_SOURCE_DIR}\\src\\mysqltool)
include_directories(${PROJECT_SOURCE_DIR}\\include)  #include文件夹位置
link_directories(${PROJECT_SOURCE_DIR}\\lib) #lib文件夹位置
#lib下dll文件名
link_libraries(libmysql)  

add_subdirectory(visibility)
add_subdirectory(protocol)
set(SERVICE_SRC
Service.cpp
ServiceInstance.cpp
Service.h
ServiceInstance.h
Provider.h
)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_library(service SHARED ${SERVICE_SRC})
