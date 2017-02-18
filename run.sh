#!/bin/bash
echo '***********************'
echo 'Run Cmake!'
cmake CMakeLists.txt

echo '***********************'
echo 'Run Make!'
make

echo '***********************'
echo 'Clear project folder'
rm -rf CMakeFiles
rm CMakeCache.txt
rm Makefile
rm cmake_install.cmake

echo '***********************'
echo 'Run Executable!'
echo '***********************'
./jarvis