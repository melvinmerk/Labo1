//
// Created by Melvin on 20/02/2020.
//

#include "Couleur.h"

Couleur::Colors Couleur::getCouleur() const {
    return this->color;
}

void Couleur::setCouleur(const Couleur::Colors& color) {
    this->color = color;
}

std::ostream& operator<<(std::ostream& os, const Couleur& couleur) {



    return os;
}
