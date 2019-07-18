# Google Protocol Buffers

Notes & Java / Golang / C++ code for Google Protocol Buffers

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install:
* Docker

```
Give examples
```


## The story

An Evolution of data
JSON JavaScript Object Notation. 
JSON format can be shared across the network.
--> put json sample <--

Advantages:
- Data can take any form (arrays, nested elements)
- Easy to read

Disadvantages:
- Data has no schema enforcing
- JSON Obejcts can be quite big in size because of repeated keys
Protocol Buffers
``` example.proto
syntax = "proto3"

message MyMessage {
    int32 id =1;
    string name = 2;
    bool is_validated = 3;
}
```
PB is defined by .proto text file.
Advantages:
- Explit types.
- Less CPU usage when data compressed.
- Schema is needed to generate code and read the data.
- Documentation can be embedded in the schema.
- 3-10x smaller, 20-100x faster then XML.

Disadvantages:
- Can't open the serialized data with a text editor.

Some big projects like 'etcd' use PB for transporting data.

- Mid 2016 Google release 3rd iteration of PB- proto3.
- In PB field names are not important, smallest tag is 1, largest 2^29, 336,870,911.
- If we try use any greather then 2^29 compiler throws an error:
- Field numbers cannot be greater than 536870911.
- Tags from 19000 - 19999 are google reserved
- Tags numbered from 1 - 15 use 1 byte in space, use them for frequently populated fields
- Tags numbeder from 16 - 2047 use 2 bytes in space. 
- Forward and backward compatible change
- Don't change the numeric tags for any existing fields
- With new fields, an old code will just ignore them
- use reserved [tag_number] when removing field
Sample: reserved 2, 15 to 19; reserved "aaa", "xyz";
- The alternative is that instead of removing a field, you rename it to OBSOLETE_field_name
- Do not remove any reserved tags
- 


## Authors

* **Piotr Wera** - *Initial work* - [pwera](https://github.com/pwera)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

