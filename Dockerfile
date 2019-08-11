# Maintained by Piotr Wera, piotr.wera@vp.pl

FROM pwera/development-ubuntu:latest

RUN git clone --single-branch --recursive https://github.com/protocolbuffers/protobuf && \
	cd /protobuf && cd cmake && mkdir build && cd build && cmake -GNinja -Dprotobuf_BUILD_TESTS=OFF  ..  && cmake --build . && cmake --build . --target install && \
	cd $HOME && mkdir src && cd src && mkdir go && mkdir cpp && mkdir java && \
	go get -v github.com/golang/protobuf/protoc-gen-go && go install github.com/golang/protobuf/protoc-gen-go && cp /root/go/bin/protoc-gen-go /usr/local/bin

RUN wget https://gist.githubusercontent.com/Pwera/6e2a4d5a40025c423d9ae1cbdec320fd/raw/4ace2c4587de90f33b5ad58d1644828aa34885e0/script.sh --directory-prefix=/root


#TODO: tag this image