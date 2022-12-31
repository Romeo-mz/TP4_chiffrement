#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Caesar.h"

int main()
{
    BasicEncrypt test("test");
    test.encode();


    Encrypt carre;
    carre.setPlain("test");
    carre.encode();
    carre.decode();
    std::cout << carre.getPlain()  <<  std::endl;
    //write("test.txt", carre);

    read("test.txt");

    //definition de l'objet de la classe Caesar avec un décalage de 3
    Caesar caesar(3);

    caesar.setPlain(read("test.txt"));
    caesar.encode();
    write(caesar.getPlain(), caesar);
   // std::cout << caesar.getPlain() << std::endl;
    std::cout << caesar.getCypher() << std::endl;
    return 0;
}