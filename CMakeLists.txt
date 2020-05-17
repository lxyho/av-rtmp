cmake_minimum_required(VERSION 3.11)

project(av-rtmp)

# FFmpeg
include_directories(${CMAKE_SOURCE_DIR}/externals/ffmpeg/include)
link_directories(${CMAKE_SOURCE_DIR}/externals/ffmpeg/lib)

# Qt
include_directories("E:/Qt/Qt5.9.0/5.9/msvc2017_64/include")
link_directories("E:/Qt/Qt5.9.0/5.9/msvc2017_64/lib")

aux_source_directory(. SRC_LIST)

message(${SRC_LIST})

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} PRIVATE
	Qt5Cored
	Qt5Multimediad
	swresample
	avutil
	avcodec
	avformat
)