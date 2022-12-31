#pragma once
#include "Encrypt.h"
#include <string>

class Caesar : public Encrypt
{
    public:

    Caesar(int decal);

    void encode() override;
    void decode() override;

    protected:

    int _decal;

};