#include <iostream>
#include <ZBinary.h>
#include <ZMap.h>

enum class STATUS
{
    GET, POST
};

int main()
{
    std::cout << "Started." << std::endl;
    constexpr Zyniac::MapArray<STATUS, 2> arr = {{"GET", STATUS::GET}, {"POST", STATUS::POST}};
    Zyniac::MapReturn<STATUS> status = Zyniac::map_get(arr, "GET");
    if(status != nullptr)
    {
        switch(*status)
        {
            case STATUS::GET:
                std::cout << "GET Status" << std::endl;
            break;

            case STATUS::POST:
                std::cout << "POST Status" << std::endl;
            break;
        }
    }

    
}