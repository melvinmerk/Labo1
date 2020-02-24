/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Vecteur.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : ce fichier contient la déclaration de classe vecteur ainsi que la
							définition de ses constructeurs

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#include "Couleur.h"

const std::vector<std::string> Couleur::LISTE_COULEUR({"rouge", "bleu", "vert"});

Colors Couleur::getCouleur() const {
    return this->color;
}

void Couleur::setCouleur(Colors color) {
    this->color = color;
}

std::ostream& operator<<(std::ostream& os, const Couleur& couleur) {
    os << Couleur::LISTE_COULEUR.at((size_t)couleur.color);
    return os;
}
