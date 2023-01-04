#pragma once
#include <string>
#include <vector>

class Encrypt
{
    public:

    Encrypt(std::string plain = "Default");

    virtual void encode();
    virtual void decode();

    std::string getCypher() const;
    std::string getPlain() const;
    std::string getMessage() const;

    void setPlain(std::string plain);
    void setCypher(std::string cypher);

    protected:

    std::string _cypher;
    std::string _plain;
    std::string _message;
};

void read(std::string nom_F);
void write(std::string nom_F, Encrypt const& encrypt);