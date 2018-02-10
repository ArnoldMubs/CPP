#include "Doubler.hpp"

#include <iostream>

int main() {
    std::cout << doubler(21) << std::endl;
    std::cout << doubler(21.f) << std::endl;
    
    int v = 30;
    std::cout<<"v = "<<v<<std::endl;
    int* pv = nullptr;
    vecteur2 u{2,1};
    vecteur2* pu = nullptr;
    std::cout<<"u.x = "<<u.x<<std::endl;
    pu = &u;
    std::cout<<"pu->x = "<<pu->x<<std::endl;
    (*pu).x = 4;
    std::cout<<"pu->x = "<<pu->x<<std::endl;
    std::cout<<"(sans pointeur) v = "<<v<<std::endl;
    
    pv = &v;
    std::cout<<"(pointeur) *pv = "<<*pv<<std::endl;
    *pv = 25;
     std::cout<<"(la valeur du pointeur) *pv = "<<*pv<<std::endl;
    std::cout<<"(sans pointeur apres avoir modifier la valeur du pointeur) v = "<<v<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Allocation dynamique"<<std::endl;
    std::cout<<std::endl;
    int* px;
    int* py;
    px = new int;
    *px = 10;
    std::cout<<"px = "<<*px<<std::endl;
    delete px;
    py = new int[3];
    for (int i=0;i<3;i++){
      py[i] = i*2;
    }
    
    for (int i=0;i<3;i++){
      std::cout<<"py["<<i<<"] = "<<py[i]<<std::endl;
    }
    delete [] py; 
    
     return 0;
}

