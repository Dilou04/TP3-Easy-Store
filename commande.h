#ifndef COMMANDE_H
#define COMMANDE_H

#include <iostream>
#include <string>
#include "client.h"
#include "produit.h"


class Commande{
    public:
        Commande(Client client, std::vector<Produit> commande, std::string status);

    private:
        Client client_;
        std::vector<Produit> commande_;
        std::string status_;

        bool isLivre(std::string status);
};

#endif