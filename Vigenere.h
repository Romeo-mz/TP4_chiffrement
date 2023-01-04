#pragma once
#include "Encrypt.h"
#include "Caesar.h"

class Vigenere : public Encrypt
{
    public:
    
    Vigenere(int key[4]);
    
    void encode() override;
    void decode() override;
    

    void getKey();
    
    protected:
    
    int _key[4];
};