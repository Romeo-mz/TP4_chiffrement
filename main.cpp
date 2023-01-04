#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"
#include "Caesar2.h"

int main()
{
    Caesar rom("aubin", 26);
    std::cout << rom.getMessage() << std::endl;
    rom.encode();
    std::cout << rom.getMessage() << std::endl;
    rom.decode();

    std::cout << rom.getMessage() << std::endl;

    Caesar2 rom2("Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.", 3);
    std::cout << rom2.getMessage() << std::endl;
    rom2.encode();
    std::cout << rom2.getMessage() << std::endl;
    rom2.decode();

    std::cout << rom2.getMessage() << std::endl;

    return 0;
}