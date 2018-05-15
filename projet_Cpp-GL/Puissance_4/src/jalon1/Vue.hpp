#ifndef VUE_HPP_
#define VUE_HPP_

class Vue {
  private :
     Moteur _moteur;
  public :
    // Lance la vue. Utile pour les interfaces graphiques, qui demandent de
    // tout initialiser avant de lancer la boucle événementielle.
    virtual void run() = 0;
};

#endif
