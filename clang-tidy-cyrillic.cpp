//
// Created by Maria.Baburina on 5/19/2017.
//

#include <iostream>
#include <string>


/// \namespace
namespace {
    // кириллица
    constexpr int a = 1 << 24;

    constexpr int b = 4096;

    // кириллица
    const std::string strA("A");

    // кириллица
    const std::string strB("BB");

    // кириллица
    const std::string strC("CCC");

    // кириллица
    const std::string strD("DDDD");

    // t
} // namespace


int main1() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//Comments over strB and strC variables definitions are marked as possible mistake, strA variable definition is not even marked as possible mistake.
