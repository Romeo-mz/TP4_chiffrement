#pragma once
#include <string>

class BasicEncrypt
{
    public:

    BasicEncrypt(std::string _plain = "Default");

    std::string encode();
    std::string decode();

    std::string getPlain() const;
    std::string getCypher() const;

    protected:

    std::string _plain;
    std::string _cypher; 
};

