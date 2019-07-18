FILES=*.proto
for f in $FILES
do 
  PB=$(echo $f | cut -d'/' -f4-)
  protoc --plugin=$GOBIN/protoc-gen-go $f --go_out=../go/pb
  protoc $f --cpp_out=../generated/cpp
  protoc $f --java_out=../java
done