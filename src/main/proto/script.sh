FILES=*.proto
for f in $FILES
do 
  PB=$(echo $f | cut -d'/' -f4-)
  protoc $f --plugin=/home/user/go/bin/protoc-gen-go  --go_out=../go/pb
  protoc $f --cpp_out=../generated/cpp
  protoc $f --java_out=../java
done