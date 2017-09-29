cmake_minimum_required(VERSION 3.6)
project(DataStorageUtility)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StorageHandler.cpp DBUtility.cpp)
add_executable(DataStorageUtility ${SOURCE_FILES})