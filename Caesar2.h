#pragma once
#include "Encrypt.h"
#include <string>

class Caesar2 : public Encrypt
{
    public:

    Caesar2(std::string message, int decalage);

    void encode() override;
    void decode() override;

    protected:
    int _decalage;

};