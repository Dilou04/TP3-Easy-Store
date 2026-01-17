#include "client.h"

Client::Client(std::string prenom, std::string nom, std::string id, std::vector<Produit> panier): prenom_(prenom), nom_(nom), id_(id), panier_(panier){

}

std::ostream& operator <<(std::ostream& os, const Client& cli){
    os << cli.prenom_ << " / " << cli.nom_ << " / " << cli.id_ << " / ";
    for(int i = 0; i < cli.panier_.size(); i++){
        os << cli.panier_[i] << std::endl;
    }
    return os;
}

void Client::addProduit(const Produit& p){
    panier_.push_back(p);
}