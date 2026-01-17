#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include "produit.h"

class Client{
    public:
        Client(std::string prenom, std::string nom, std::string id, std::vector<Produit> panier = {});

        void addProduit(const Produit& p);
        friend std::ostream& operator <<(std::ostream& os, const Client& cli);

    private:
        std::string prenom_;
        std::string nom_;
        std::vector<Produit> panier_;
        std::string id_;

};

#endif