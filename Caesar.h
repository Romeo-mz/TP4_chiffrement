#pragma once
#include "Encrypt.h"
#include <string>

class Caesar : public Encrypt
{
    public:

    Caesar();

    void encode() override;
    void decode() override;

};