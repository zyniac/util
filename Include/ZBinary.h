namespace Zyniac::Binary
{
    void MAKE_VERSION(unsigned short& val, const unsigned char& major, const unsigned char& release);
    void GET_VERSION(const unsigned short& val, unsigned char& major, unsigned char& release);

}