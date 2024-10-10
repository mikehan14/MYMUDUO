cmake_minimum_required(VERSION 2.5)
project(mymuduo)
# mymuduo 最终编译为so动态库， 设置动态库路径, 放在根目录lib文件夹下面
set(LIBRARY_OUTPUT_DIRECTORY $ {PROJECT_SOURCE_DIR}/lib)
# 设置调试信息,启动c++11语言标准
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11")

# 定义参与编译的源文件S
aux_source_directory(. SRC_LIST)
# 编译生成动态库mymuduo
add_library(mymuduo_SHARED ${SRC_LIST})