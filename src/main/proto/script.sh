FILES=*.proto
for f in $FILES
do 
  PB=$(echo $f | cut -d'/' -f4-)
#  protoc --plugin=/usr/local/bin/protoc-gen-go $PB --go_out=src/go
  protoc $f --cpp_out=../generated/cpp
#  protoc $PB --java_out=src/java
done