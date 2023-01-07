#include "Vigenere.h"
#include "Encrypt.h"
#include <iostream>
#include <string>

Vigenere::Vigenere(std::string message, std::vector<int> key):_key(key) 
{
    _plain = message;
}

Vigenere::Vigenere(std::string message, std::string key)
{
    _plain = message;
    _key = {};
	for (int i = 0; i < key.size(); ++i) 
    {
		_key.push_back(int(key[i]));
	}
}


void Vigenere::getKey()
{
    for (int i = 0; i < _key.size(); ++i) 
    {
		std::cout << _key[i] << std::endl;
	}
}

void Vigenere::encode()
{
    std::string txt = "";
    int nomb;
    int nomb_code;
    char letter_code;

    int lenght_key = _key.size();
    int i = 0;

    for(char letter : _plain)
    {   
        nomb = int(letter) - 65;
        nomb_code = (nomb + _key[i]) % 26 ;

        letter_code = char(nomb_code + 65);
        i = (i + 1) % lenght_key;

        txt +=letter_code;
    }
    _cypher = txt;
}

void Vigenere::decode()
{
    std::string txt = "";
    int nomb;
    int nomb_code;
    char letter_code;

    int lenght_key = _key.size();
    int i = 0;

    for(char letter : _cypher)
    {   
        nomb = int(letter) - 65;
        nomb_code = (nomb - _key[i]) % 26 ;

        letter_code = char(nomb_code + 65);
        i = (i + 1) % lenght_key;

        txt +=letter_code;
    }
    _cypher = txt;
}
