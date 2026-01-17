#include "produit.h"

Produit::Produit(std::string titre, std::string description, int quantite, std::string prix): titre_(titre), description_(description), quantite_(quantite), prix_(prix){

}


std::ostream& operator <<(std::ostream& os, const Produit& prod){
    os << prod.titre_ << " / " << prod.description_ << " / " << prod.quantite_ << " / " << prod.prix_ <<std::endl;
    return os;
}