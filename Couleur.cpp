/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Couleur.cpp
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : Ce fichier contient la définition des méthodes de la classe Couleur. Cette classe
              nous permettera de donner un attribut couleur aux formes que l'on construira.

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
