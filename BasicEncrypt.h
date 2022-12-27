#pragma once

#include <string>

class BasicEncrypt
{
    public:

    BasicEncrypt(std::string _plain = "Default");

    std::string encode(std::string plain);
    std::string decode(std::string cypher);

    void plain() const;
    void cypher() const;

    protected:

    std::string _plain;
    std::string _cypher; 
};

void read();
void write();