
#include <iostream>
#include "Bibliotheque.hpp"

int main() {

    Bibliotheque b;
    b.push_back(Livre("t1","a1",1996));
    b.push_back(Livre("t2","a2",1998));
    b.push_back(Livre("t0","a0",2008));
    b.afficher();

    std::cout<< std::endl<<"Trie par titre  et par auteur\n" << std::endl;
    b.trierParAuteurEtTitre();
    b.afficher();

    std::cout<< std::endl<<"Trie par année\n" << std::endl;
    b.trierParAnnee();
    b.afficher();
    
    return 0;
}

