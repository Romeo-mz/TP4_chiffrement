#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Encrypt.h"

Encrypt::Encrypt(std::string plain):_plain(plain)
{
    _cypher = "Default";
}

std::string Encrypt::getCypher() const
{
    return _cypher;
}
std::string Encrypt::getPlain() const
{
    return _plain;
}

std::string Encrypt::getMessage() const
{
    return _message;
}
void Encrypt::decode() 
{
    _plain = _cypher;
}

void Encrypt::encode() 
{
    _cypher = _plain;
}

void Encrypt::setCypher(std::string cypher)
{
    _cypher = cypher;
}

void Encrypt::setPlain(std::string plain)
{
    _plain = plain;
}
void read(std::string name_F) 
{
    std::ifstream file;
    file.open(name_F);

    if(!file)
    {
        std::cout << "Error opening file";
    }

    std::string line;

    while(std::getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();

}

void write(std::string name_F, Encrypt const& encrypt ) 
{
    std::ofstream file(name_F);
    if(!file)
    {
        std::cout << "Error writing file" << std::endl;
    }
    else
    {
        file << "Cypher : " << encrypt.getCypher() << std::endl;
        file << "Plain : " << encrypt.getPlain() << std::endl;
    }
    file.close();
}