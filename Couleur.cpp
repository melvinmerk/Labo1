//
// Created by Melvin on 20/02/2020.
//

#include "Couleur.h"

Colors Couleur::getCouleur() const {
    return this->color;
}

void Couleur::setCouleur(Colors color) {
    this->color = color;
}

std::ostream& operator<<(std::ostream& os, const Couleur& couleur) {

    switch (couleur.color) {
        case Colors::ROUGE:
            os << "Rouge";
            break;

        case Colors::BLEU:
            os << "Bleu";
            break;

        case Colors::VERT:
            os << "Vert";
            break;

        default:
            os << "Indefini";
    }

    return os;
}
