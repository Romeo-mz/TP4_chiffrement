#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"
#include "Caesar2.h"
#include "Vigenere.h"

int main()
{
    std::string message = store("sentences.txt");
    Caesar2 caesar(message, 3);
    std::cout << caesar.getMessage() << std::endl;
    caesar.encode();
    std::cout << caesar.getMessage() << std::endl;
    caesar.decode();
    std::cout << caesar.getMessage() << std::endl;

    Caesar2 caesar2("Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.", 3);
    std::cout << caesar2.getMessage() << std::endl;
    caesar2.encode();
    std::cout << caesar2.getMessage() << std::endl;
    caesar2.decode();
    std::cout << caesar2.getMessage() << std::endl;

    std::vector<int> key{1,2,3,4};
    Vigenere vig("Test du codage Vigenere", key);
    std::cout << vig.getPlain() << std::endl;

    vig.encode();
    std::cout << vig.getCypher() << std::endl;
    
    vig.decode();
    std::cout << vig.getPlain() << std::endl;

    return 0;
}