#ifndef VUECONSOLE_HPP_
#define VUECONSOLE_HPP_
#include "Vue.hpp"


// Classe abstraite pour dériver des vues du viewer de bouteilles.
class VueConsole : public Vue {
  
    public :
      VueConsole(Controleur & controleur);
      void actualiser();
      void run();
};

#endif
    
