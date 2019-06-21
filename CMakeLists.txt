cmake_minimum_required(VERSION 3.14)
project(protobufs1)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

add_executable(MyMessageMain src/main/cpp/MyMessageMain.cc src/main/generated/cpp/MyMessage.pb.cc)
target_link_libraries(MyMessageMain PRIVATE protobuf::libprotobuf-lite protobuf::libprotobuf protobuf::libprotoc)
target_include_directories(MyMessageMain PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/main/generated/cpp)
