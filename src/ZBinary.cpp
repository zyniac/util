#include <ZBinary.h>

void Zyniac::Binary::MAKE_VERSION(unsigned short& val, const unsigned char& major, const unsigned char& release)
{
    val = 0;
    val |= major << 8 | release;
}

void Zyniac::Binary::GET_VERSION(const unsigned short& val, unsigned char& major, unsigned char& release)
{
    major = static_cast<unsigned char>((val & 0xFF00) >> 8);
    release = static_cast<unsigned char>(val & 0x00FF);
}