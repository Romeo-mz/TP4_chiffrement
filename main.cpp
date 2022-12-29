#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"

int main()
{
    BasicEncrypt test("test");
    test.encode();


    Encrypt carre("test");
    carre.encode();
    carre.decode();
    std::cout << carre.getPlain()  <<  std::endl;
    write("test.txt", carre);

    read("test.txt");

    Caesar rom;

    rom.setCypher("URPHR");
    rom.decode();

    //std::cout << rom.getCypher() << std::endl;
    std::cout << rom.getPlain() << std::endl;

    return 0;
}