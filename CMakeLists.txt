cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(dcmtk-hello VERSION 0.1 LANGUAGES CXX)

find_package(DCMTK)

message("DCMTK= ${DCMTK_FOUND} | ${DCMTK_LIBRARIES} | ${DCMTK_INCLUDE_DIRS}")

add_executable(dcmtk-hello src/main.cpp)
set_target_properties(dcmtk-hello PROPERTIES
  CXX_STANDARD 11
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF)
target_link_libraries(dcmtk-hello LINK_PUBLIC
  dcmimage dcmimgle dcmdata oflog ofstd)
