#include <iostream>
#include "BasicEncrypt.h"
#include <string>

// Constructeur de la Classe BasicEncrypt
BasicEncrypt::BasicEncrypt(std::string plain):_plain(plain)
{
    _cypher = "Default";
}

// Fonction qui crypte le message en assignant la valeur de plain à la variable membre cypher
void BasicEncrypt::encode()
{
    _cypher = _plain;
}

// Fonction qui décrypte le message en assignant la valeur de cypher à la variable membre plain
void BasicEncrypt::decode()
{
    _plain = _cypher;
}

// Getter permettant d'afficher le mot non crypté/décrypté _plain
 std::string BasicEncrypt::getPlain() const
{
    return _plain;
}

// Getter permettant d'afficher le mot crypté _cypher
 std::string BasicEncrypt::getCypher() const
{
    return _cypher;
}