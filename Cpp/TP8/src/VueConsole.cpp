#include <iostream>
#include "VueConsole.hpp"
#include "Controleur.hpp"


VueConsole::VueConsole(Controleur & controleur):Vue(controleur){
  actualiser();
}
void VueConsole::actualiser(){
  std::cout<<_controleur.getTexte()<<std::endl;
}
void VueConsole::run(){}


