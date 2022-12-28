#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"


int main()
{
    BasicEncrypt test("test");
    test.encode();


    Encrypt carre("test");
    carre.encode();
    carre.decode();
    std::cout << carre.getPlain() << carre.getCypher() <<  std::endl;
    write("test.txt", carre);

    read("test.txt");
    return 0;
}