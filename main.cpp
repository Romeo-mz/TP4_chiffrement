#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"

int main()
{
    Caesar rom("aubin", 26);
    std::cout << rom.getMessage() << std::endl;
    rom.encode();
    std::cout << rom.getMessage() << std::endl;
    rom.decode();

    std::cout << rom.getMessage() << std::endl;

    return 0;
}