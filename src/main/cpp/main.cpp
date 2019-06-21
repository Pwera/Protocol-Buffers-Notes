#include <iostream>
#include <fstream>

#include "MyMessage.pb.h"

int main() {
    me::piotr::wera::MyMessage m;
    m.set_context(me::piotr::wera::context::ContextEnum::BAD);
    m.set_name("first name");

    std::fstream output("f1.data", std::ios::out | std::ios::trunc | std::ios::binary);
    m.SerializeToOstream(&output);

    output.close();
}



