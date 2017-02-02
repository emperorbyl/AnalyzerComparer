cmake_minimum_required(VERSION 3.7)
project(HWK2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utils.cpp Utils.h Comparer.cpp Comparer.h Transaction.cpp Transaction.h Report.cpp Report.h Analyst.cpp Analyst.h)
add_executable(HWK2 ${SOURCE_FILES})