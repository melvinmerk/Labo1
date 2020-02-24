//
// Created by Melvin on 20/02/2020.
//

#include "Carre.h"

double Carre::getCote() const {
    return this->cote;
}
void Carre::setCote(double cote) {
    this->cote = cote;
}

Couleur Carre::getCouleur() const {
    return this->couleur;
}
void Carre::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

double Carre::getSurface() const {
    return this->cote * this->cote;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre) {
    os  << "Cote: " << carre.cote
        << " Surface: " << carre.getSurface()
        << " Couleur: " << carre.couleur;

    return os;
}