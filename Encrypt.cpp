#include <iostream>
#include <string>
#include <fstream>
#include "Encrypt.h"

Encrypt::Encrypt()
{
    _cypher = "Default";
    _plain = "Default";
}

std::string Encrypt::getCypher() const
{
    return _cypher;
}
std::string Encrypt::getPlain() const
{
    return _plain;
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
std::string read(std::string name_F) 
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
    return(line);
    file.close();

}

std::string write(std::string name_F, Encrypt const& encrypt ) 
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