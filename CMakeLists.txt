cmake_minimum_required(VERSION 3.17)
project(NespSdkCpp)

set(CMAKE_CXX_STANDARD 20)

# 添加头文件
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 添加连接库
link_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

add_library(NespSdkCpp SHARED utils/Arrays.cpp include/Arrays.h test/utils/ArraysTest.cpp)
set_target_properties(NespSdkCpp PROPERTIES PREFIX "")

# Main Test Entry
add_executable(NespSdkCppTest test/main.cpp)

# 将目标文件与库文件进行链接
target_link_libraries(NespSdkCppTest NespSdkCpp)
