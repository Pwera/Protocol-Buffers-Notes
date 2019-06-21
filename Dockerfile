FROM ubuntu:18.04

RUN apt-get update && apt-get update

RUN apt install -y git cmake g++ libz-dev

RUN git clone --single-branch --recursive https://github.com/protocolbuffers/protobuf
 
RUN apt install -y ninja-build

RUN cd /protobuf && cd cmake && mkdir build && cd build && cmake -GNinja -Dprotobuf_BUILD_TESTS=OFF  ..  && cmake --build . && cmake --build . --target install

RUN apt install -y wget

RUN wget https://dl.google.com/go/go1.12.6.linux-amd64.tar.gz && tar -xzf go1.12.6.linux-amd64.tar.gz && rm go1.12.6.linux-amd64.tar.gz && cd go && cd bin && cp go /usr/local/bin

ENV GOROOT=/go
ENV GOPATH=/root/src

RUN cd $HOME && mkdir src && cd src && mkdir go && mkdir cpp && mkdir java

RUN go get github.com/golang/protobuf/protoc-gen-go && go install github.com/golang/protobuf/protoc-gen-go && cp $GOPATH/bin/protoc-gen-go /usr/local/bin

RUN wget https://gist.githubusercontent.com/Pwera/6e2a4d5a40025c423d9ae1cbdec320fd/raw/4ace2c4587de90f33b5ad58d1644828aa34885e0/script.sh --directory-prefix=/root