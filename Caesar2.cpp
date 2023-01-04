#include <iostream>
#include <string>
#include "Caesar2.h"

Caesar2::Caesar2(std::string message, int decalage) : _decalage(decalage)
{
    _message = message;
    _plain = _message;
    _cypher = "";
}
//Utilise deux Alphabets pour naviguer de l'un à l'autre en fonction du décalage et initialiser le nouveau _plain
void Caesar2::encode()
{
    std::string alphabet[2];
    alphabet[0] =" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    alphabet[1] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

    //int decal = 3;

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(_decalage == alphabet[1].size())
        {
            _decalage = 0;
        }
        alphabet[1][i] = alphabet[0][_decalage];
        _decalage++;
    }


    for(int i = 0; i < _plain.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_plain[i] == alphabet[0][j])
            {
                _cypher += alphabet[1][j];
            }
        }
    }
    _message = _cypher;
}
//Utilise le même principe que encode mais avec l'alphabet 0 à l'envers
void Caesar2::decode() 
{
    _message = "";
    std::string alphabet[2];
    alphabet[0] ="~}|{zyxwvutsrqponmlkjihgfedcba`_^]\\[ZYXWVUTSRQPONMLKJIHGFEDCBA@?>=<;:9876543210/.-,+*)('&%$#\"! ";
    alphabet[1] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

    //int decal = 3;

    for(int i = 0; i < alphabet[0].size(); i++)
    {
        if(_decalage == alphabet[1].size())
        {
            _decalage = 0;
        }
  
        alphabet[1][i] = alphabet[0][_decalage];
        _decalage++;
    }


    for(int i = 0; i < _cypher.size(); i++)
    {
        for(int j = 0; j < alphabet[0].size(); j++)
        {
            if(_cypher[i] == alphabet[0][j])
            {
                _message += alphabet[1][j];
            }
        }
    }
}