#include <iostream>
#include <string>
#include "Caesar2.h"

// Constructeur de la Classe Caaesar2 qui initialise les variables
Caesar2::Caesar2(std::string message, int decalage) : _decalage(decalage)
{
    _message = message;
    _plain = _message;
    _cypher = "";
}

/*  Méthode permettant d'encoder le message indiqué dans le constructeur
    Utilisation de deux Alphabets pour naviguer de l'un à l'autre en fonction du décalage et initialiser le nouveau _plain
    à l'aide de boucles for  
*/
void Caesar2::encode()
{
    std::string alphabet[2];
    alphabet[0] =" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    alphabet[1] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

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

/*  Méthode permettant de décoder le message crypter par encode()
    Utilisation du même principe que encode() mais avec l'un des deux alphabets à l'envers
*/
void Caesar2::decode() 
{
    _message = "";
    std::string alphabet[2];
    alphabet[0] ="~}|{zyxwvutsrqponmlkjihgfedcba`_^]\\[ZYXWVUTSRQPONMLKJIHGFEDCBA@?>=<;:9876543210/.-,+*)('&%$#\"! ";
    alphabet[1] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

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