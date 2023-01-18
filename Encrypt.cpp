#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Encrypt.h"

// Constructeur de la Classe Encrypt
Encrypt::Encrypt(std::string plain):_plain(plain)
{
    _cypher = "Default";
}

// Getter permettant de retourner le mot crypté
std::string Encrypt::getCypher() const
{
    return _cypher;
}

// Getter permettant de retourner le mot non crypté
std::string Encrypt::getPlain() const
{
    return _plain;
}

// Getter permettant de retourner le message à crypter
std::string Encrypt::getMessage() const
{
    return _message;
}

// Setter permettant de décoder le message crypté
void Encrypt::decode() 
{
    _plain = _cypher;
}

// Setter permettant d'encoder le message non crypté
void Encrypt::encode() 
{
    _cypher = _plain;
}

// Setter permettant d'initialiser le mot crypté
void Encrypt::setCypher(std::string cypher)
{
    _cypher = cypher;
}

// Setter permettant d'initialiser le mot non crypté
void Encrypt::setPlain(std::string plain)
{
    _plain = plain;
}

// Fonction permettant de lire le contenu d'un fichier
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

// Fonction permettant de stocker le contenu d'un fichier dans une variable string
std::string store(std::string name_F) 
{
    std::ifstream file;
    file.open(name_F);
    std::string sentences;

    if(!file)
    {
        std::cout << "Error opening file";
    }

    std::string line;

    while(std::getline(file, line))
    {
        sentences += "\n" + line;
    }

    file.close();
    return sentences;

}

// Fonction permmettant d'écrire le message crypté et le message non crypté dans un fichier
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