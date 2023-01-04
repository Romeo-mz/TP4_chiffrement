#include "Vigenere.h"
#include <iostream>
#include <string>

Vigenere::Vigenere(int key[4])
{
    for (int i = 0; i < 4; i++){
        _key[i] = key[i];
    }
}


void Vigenere::getKey()
{
    std::cout << _key << std::endl;
}

void Vigenere::encode()
{
    std::string alphabet[2];
    alphabet[0] ="ZYXWVUTSRQPONMLKJIHGFEDCBA";
    alphabet[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(_key[i] == alphabet[1].size())
        {
            _key[i] = 0;
        }
  
        alphabet[1][i] = alphabet[0][_key[i]];
        _key[i]++;
    }


    for(int i = 0; i < _cypher.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_cypher[i] == alphabet[0][j])
            {
                _plain += alphabet[1][j];
            }
        }
    }

}

void Vigenere::decode()
{
    std::string alphabet[2];
    alphabet[0] ="ZYXWVUTSRQPONMLKJIHGFEDCBA";
    alphabet[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(_key[i] == alphabet[1].size())
        {
            _key[i] = 0;
        }
  
        alphabet[1][i] = alphabet[0][_key[i]];
        _key[i]++;
    }


    for(int i = 0; i < _cypher.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_cypher[i] == alphabet[0][j])
            {
                _plain += alphabet[1][j];
            }
        }
    }

}