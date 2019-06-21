cmake_minimum_required(VERSION 3.14)
project(protobufs1)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

add_executable(protobufs1 src/main/generated/cpp/MyMessage.pb.cc src/main/generated/cpp/ContextEnum.pb.cc src/main/cpp/main.cpp )
target_link_libraries(protobufs1 PRIVATE protobuf::libprotobuf-lite protobuf::libprotobuf protobuf::libprotoc)
target_include_directories(protobufs1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/main/generated/cpp)


#SET(LIBFOO_TAR_HEADERS "")
#add_custom_command(OUTPUT protobufs1
#        COMMAND protoc
##        COMMAND ${CMAKE_COMMAND} -E touch ${LIBFOO_TAR_HEADERS}
#        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
##        DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/libfoo/foo.tar"
#        COMMENT "Unpacking foo.tar"
#        VERBATIM
#        )
#
#add_custom_target(full_out
#        DEPENDS protobufs1)

#ADD_CUSTOM_COMMAND(TARGET protobufs1
#        PRE_BUILD
#        COMMAND protoc
#        WORKING_DIRECTORY /home/uzytkownik/repo/bin
#        )
