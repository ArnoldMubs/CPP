#ifndef Vecteur3_hpp
#define Vecteur3_hpp
struct vecteur3 {
  float x,y,z;
  void afficher();
};

void afficher (vecteur3 v);
int norme (vecteur3 v);
int produitScalaire (vecteur3 u, vecteur3 v);
vecteur3 addition (vecteur3 u, vecteur3 v);
#endif
