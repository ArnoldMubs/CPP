#include <iostream>

#include "Liste.hpp"

int main() {

    Liste l1;
    l1.push_front(37);
    l1.push_front(13);
    std::cout << l1 << std::endl;

    return 0;
}

