#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> commande, std::string status): client_(client), commande_(commande), status_(status){

}

bool Commande::isLivre(std::string status){
    if(status == "livre"){
        return true;
    };
    return false;
}

void Commande::updateStatus(){
    status_ = "Livré";
}

std::string Commande::getStatus(){
    return status_;
}