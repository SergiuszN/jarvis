cmake_minimum_required (VERSION 2.6)
project (jarvis)

if(MSVC)
    add_definitions(-W4 -WX -wd"4996")
endif()

#add_definitions(-fsigned-char -Wall -W -Wshadow -Wpointer-arith -Wcast-qual -Winline -Werror)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

set(SOURCE_FILES
        main.cpp
        fs/DirContent/DirContent.cpp
        fs/DirContent/Dir/Dir.cpp
        fs/DirContent/File/File.cpp
        console/console.cpp
        )

add_executable(jarvis ${SOURCE_FILES})
##add_executable(cpp_sample vendor/tinydir/samples/cpp_sample.cpp)
