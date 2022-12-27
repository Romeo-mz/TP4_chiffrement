#include <iostream>
#include "BasicEncrypt.h"

int main()
{
    BasicEncrypt test("Guette");

    test.encode("encode");
    test.decode("decode");

    test.cypher();
    test.plain();

    return 0;
}