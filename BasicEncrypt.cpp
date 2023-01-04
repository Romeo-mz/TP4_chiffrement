#include <iostream>
#include "BasicEncrypt.h"
#include <string>

BasicEncrypt::BasicEncrypt(std::string plain):_plain(plain)
{
    _cypher = "Default";
}
//Assigne la valeur de plain à la variable membre cypher
void BasicEncrypt::encode()
{
    _cypher = _plain;
}
//Assigne la valeur de cypher à la variable membre plain
void BasicEncrypt::decode()
{
    _plain = _cypher;
}
//Affiche _plain
 std::string BasicEncrypt::getPlain() const
{
    return _plain;
}
//Affiche _cypher
 std::string BasicEncrypt::getCypher() const
{
    return _cypher;
}