# 设置项目的最低CMake版本要求
cmake_minimum_required(VERSION 3.8)

# 设置项目名称
project(CommandPattern)

file(GLOB INCLUDES "*.h")
file(GLOB SOURCES "*.cpp")

# 添加可执行文件
add_executable(CommandPattern ${INCLUDES} ${SOURCES})

# 添加子目录（如果有其他源代码目录）
#add_subdirectory(subdir)

# 链接外部库（例如：链接一个名为 "my_library" 的库）
#target_link_libraries(my_app my_library)
