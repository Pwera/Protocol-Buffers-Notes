FROM ubuntu:18.04

RUN apt-get update && apt-get update

RUN apt install -y git cmake g++ libz-dev

RUN git clone --single-branch --recursive https://github.com/protocolbuffers/protobuf
 
RUN apt install -y ninja-build

RUN cd /protobuf && cd cmake && mkdir build && cd build && cmake -GNinja -Dprotobuf_BUILD_TESTS=OFF  ..  && cmake --build . && cmake --build . --target install