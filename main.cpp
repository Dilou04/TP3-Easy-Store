#include <iostream>
#include "produit.h"
#include "client.h"
#include "commande.h"

int main(){
    
    Produit ps4("PS4", "Console de salon", 200, "100€");
    Produit xbox("XBOX", "Console moins bien que la PS4", 500, "150€");
    std::cout << ps4 << std::endl;

    Client dylan("Dylan", "LITWINAKI", "12" , {});
    std::cout << dylan << std::endl;
    
    dylan.addProduit(ps4);
    std::cout << dylan << std::endl;

}