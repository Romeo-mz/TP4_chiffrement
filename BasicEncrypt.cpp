#include <iostream>
#include "BasicEncrypt.h"
#include <string>

BasicEncrypt::BasicEncrypt(std::string plain):_plain(plain)
{
    _cypher = "Default";
}
//Assigne la valeur de plainà la variable membre cypher
std::string BasicEncrypt::encode(std::string plain)
{
    _cypher = plain;
}
//Assigne la valeur de cypher à la variable membre plain
std::string BasicEncrypt::decode(std::string cypher)
{
    _plain = cypher;
}
//Affiche _plain
void BasicEncrypt::plain() const
{
    std::cout << _plain;
}
//Affiche _cypher
void BasicEncrypt::cypher() const
{
    std::cout << _cypher;
}