# Maintained by Piotr Wera, piotr.wera@vp.pl

FROM pwera/development-ubuntu:latest

RUN git clone --single-branch --recursive https://github.com/protocolbuffers/protobuf && \
	cd /protobuf && cd cmake && mkdir build && cd build && cmake -GNinja -Dprotobuf_BUILD_TESTS=OFF  ..  && cmake --build . && cmake --build . --target install && \
	cd $HOME && mkdir src && cd src && mkdir go && mkdir cpp && mkdir java && \
	go get -v github.com/golang/protobuf/protoc-gen-go && go install github.com/golang/protobuf/protoc-gen-go && cp /root/go/bin/protoc-gen-go /usr/local/bin

RUN git clone https://github.com/Pwera/Protocol-Buffers-Notes && cd Protocol-Buffers-Notes/src/main/proto && chmod 777 script.sh && ./script.sh


#TODO: tag this image