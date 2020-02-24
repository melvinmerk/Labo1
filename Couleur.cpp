//
// Created by Melvin on 20/02/2020.
//

#include "Couleur.h"

const std::vector<std::string> Couleur::LISTE_COULEUR = {"rouge", "bleu", "vert"};

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
