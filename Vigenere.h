#pragma once
#include "Encrypt.h"
#include "Caesar.h"

class Vigenere : public Encrypt
{
    public:
    
    Vigenere(std::string message, std::vector<int> _key);
    Vigenere(std::string message, std::string key);

    void encode() override;
    void decode() override;
    void getKey();
    
    protected:
    
    std::vector<int> _key;
};