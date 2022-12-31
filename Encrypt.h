#pragma once
#include <string>

class Encrypt
{
    public:

    Encrypt();

    virtual void encode();
    virtual void decode();

    std::string getCypher() const;
    std::string getPlain() const;

    void setPlain(std::string plain);
    void setCypher(std::string cypher);

    protected:

    std::string _cypher;
    std::string _plain;
};

std::string read(std::string nom_F);
std::string write(std::string nom_F, Encrypt const& encrypt);