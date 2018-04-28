#ifndef STOCK_HPP_
#define STOCK_HPP_

class Stock {
   private :
     std::map<std::string,float> _produits;
   public :
     void recalculerStock (const Inventaire & inventaire);
};
#endif
