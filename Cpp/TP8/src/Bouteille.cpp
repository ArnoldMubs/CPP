#include "Bouteille.hpp"

#include <locale>

std::istream& operator >>(std::istream& is, Bouteille& b) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
    std::string buffer;
	if (std::getline(is, buffer, ';')) 
        b._nom = buffer;
	if (std::getline(is, buffer, ';')) 
        b._date = buffer;
	if (std::getline(is, buffer, '\n')) 
        b._volume = std::stof(buffer);
	std::locale::global(vieuxLoc);
	return is;
}

std::ostream& operator <<(std::ostream& os, const Bouteille& b) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	os << b._nom << ';' << b._date << ';' << b._volume << '\n';
	std::locale::global(vieuxLoc);
	return os;
}
