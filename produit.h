#ifndef PRODUIT_H
#define PRODUIT_H

#include <iostream>
#include <string>
#include <ostream>

class Produit{
    public:
        Produit(std::string titre, std::string description, int quantite, std::string prix);
        std::string titre();
        std::string description();
        int quantite();
        std::string prix();

        friend std::ostream& operator<<(std::ostream& os, const Produit& prod);

    private:
        std::string titre_;
        std::string description_;
        int quantite_;
        std::string prix_;
        bool isDispo(std::string titre, int quantite);

};

#endif
