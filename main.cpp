#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"
#include "Caesar2.h"
#include "Vigenere.h"

int main()
{
    std::string message = store("sentences.txt");
    Caesar2 rom(message, 3);
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

    Vigenere vig({5,1,3,2});
    vig.setPlain("BONJOURS");
    vig.encode();
    std::cout << vig.getCypher() << "\n";
    vig.decode();
    std::cout << vig.getPlain() << "\n";


    return 0;
}