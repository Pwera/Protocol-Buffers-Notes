#!/bin/bash \
FILES=/root/*.proto 
for f in $FILES
do 
  PB=$(echo $f | cut -d'/' -f3-)
  protoc --plugin=/usr/local/bin/protoc-gen-go $PB --go_out=src/go
  protoc $PB --cpp_out=src/cpp
  protoc $PB --java_out=src/java
done