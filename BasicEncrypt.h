#pragma once
#include <string>

class BasicEncrypt
{
    public:

    BasicEncrypt(std::string _plain = "Default");

    void encode();
    void decode();

    std::string getPlain() const;
    std::string getCypher() const;

    protected:

    std::string _plain;
    std::string _cypher; 
};

