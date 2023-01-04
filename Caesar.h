#pragma once
#include "Encrypt.h"
#include <string>

class Caesar : public Encrypt
{
    public:

    Caesar(std::string message, int decalage);

    void encode() override;
    void decode() override;

    protected:
    int _decalage;

};